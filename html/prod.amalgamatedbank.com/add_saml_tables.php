<?php
/**
 * Root directory of Drupal installation.
 */

ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

// This bootstraps Drupal...
define('DRUPAL_ROOT', getcwd());
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

db_query("
CREATE TABLE `simpleSAMLphp_assertstore` (
`_type` VARCHAR(30) NOT NULL,
`_key` VARCHAR(50) NOT NULL,
`_value` LONGTEXT NOT NULL,
`_global_office_value` LONGTEXT NOT NULL,
`timestamp` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
PRIMARY KEY (`_key`, `_type`)
)
COLLATE='latin1_swedish_ci'
ENGINE=InnoDB
");
db_query("
CREATE TABLE `simpleSAMLphp_kvstore` (
`_type` VARCHAR(30) NOT NULL,
`_key` VARCHAR(50) NOT NULL,
`_value` TEXT NOT NULL,
`_expire` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
PRIMARY KEY (`_key`, `_type`),
INDEX `simpleSAMLphp_kvstore_expire` (`_expire`)
)
COLLATE='latin1_swedish_ci'
ENGINE=InnoDB
");
db_query("
CREATE TABLE `simpleSAMLphp_saml_LogoutStore` (
`_authSource` VARCHAR(30) NOT NULL,
`_nameId` VARCHAR(40) NOT NULL,
`_sessionIndex` VARCHAR(50) NOT NULL,
`_expire` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
`_sessionId` VARCHAR(50) NOT NULL,
UNIQUE INDEX `_authSource` (`_authSource`, `_nameId`, `_sessionIndex`),
INDEX `simpleSAMLphp_saml_LogoutStore_expire` (`_expire`),
INDEX `simpleSAMLphp_saml_LogoutStore_nameId` (`_authSource`, `_nameId`)
)
COLLATE='latin1_swedish_ci'
ENGINE=InnoDB
");
db_query("
CREATE TABLE `simpleSAMLphp_tableVersion` (
`_name` VARCHAR(30) NOT NULL,
`_version` INT(11) NOT NULL,
UNIQUE INDEX `_name` (`_name`)
)
COLLATE='latin1_swedish_ci'
ENGINE=InnoDB
");

?>