<?php
/**
 * SAML 2.0 remote IdP metadata for simpleSAMLphp.
 *
 * Remember to remove the IdPs you don't use from this file.
 *
 * See: https://simplesamlphp.org/docs/stable/simplesamlphp-reference-idp-remote 
 */

/*
 * Guest IdP. allows users to sign up and register. Great for testing!
 */
$metadata['http://www.okta.com/exk5hef6nlvQ4DacD0x7'] = array (
  'entityid' => 'http://www.okta.com/exk5hef6nlvQ4DacD0x7',
  'contacts' => 
  array (
  ),
  'metadata-set' => 'saml20-idp-remote',
  'sign.authnrequest' => true,
  'SingleSignOnService' => 
  array (
    0 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://amalgamated.okta.com/app/amalgamatedbank_amalgamatedinvestmentmanagement_1/exk5hef6nlvQ4DacD0x7/sso/saml',
    ),
    1 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
      'Location' => 'https://amalgamated.okta.com/app/amalgamatedbank_amalgamatedinvestmentmanagement_1/exk5hef6nlvQ4DacD0x7/sso/saml',
    ),
  ),
  'SingleLogoutService' => 
  array (
    0 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-POST',
      'Location' => 'https://amalgamated.okta.com/app/amalgamatedbank_amalgamatedinvestmentmanagement_1/exk5hef6nlvQ4DacD0x7/slo/saml',
    ),
    1 => 
    array (
      'Binding' => 'urn:oasis:names:tc:SAML:2.0:bindings:HTTP-Redirect',
      //'Location' => 'https://amalgamated.okta.com/app/amalgamatedbank_amalgamatedinvestmentmanagement_1/exk5hef6nlvQ4DacD0x7/slo/saml',
	  'Location' => 'https://www.amalgamatedbank.com/user/logout',
    ),
  ),
  'ArtifactResolutionService' => 
  array (
  ),
  'keys' => 
  array (
    0 => 
    array (
      'encryption' => false,
      'signing' => true,
      'type' => 'X509Certificate',
      'X509Certificate' => 'MIIDpjCCAo6gAwIBAgIGAVH58VK8MA0GCSqGSIb3DQEBBQUAMIGTMQswCQYDVQQGEwJVUzETMBEG
A1UECAwKQ2FsaWZvcm5pYTEWMBQGA1UEBwwNU2FuIEZyYW5jaXNjbzENMAsGA1UECgwET2t0YTEU
MBIGA1UECwwLU1NPUHJvdmlkZXIxFDASBgNVBAMMC2FtYWxnYW1hdGVkMRwwGgYJKoZIhvcNAQkB
Fg1pbmZvQG9rdGEuY29tMB4XDTE1MTIzMTIxMjc0MFoXDTI1MTIzMTIxMjg0MFowgZMxCzAJBgNV
BAYTAlVTMRMwEQYDVQQIDApDYWxpZm9ybmlhMRYwFAYDVQQHDA1TYW4gRnJhbmNpc2NvMQ0wCwYD
VQQKDARPa3RhMRQwEgYDVQQLDAtTU09Qcm92aWRlcjEUMBIGA1UEAwwLYW1hbGdhbWF0ZWQxHDAa
BgkqhkiG9w0BCQEWDWluZm9Ab2t0YS5jb20wggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIB
AQCVjiP7hodTeRdIlI3i7KkAhsLBhaSZc0+YWlXbedXw0M0yPNrKDndlSQNNMJ5V+5nnBHvSBChn
1fORc9Fdb79vVymJV6FSq5FoGxcjDpZneYYG3+dHXG1RKy5VKtCRQL8vQxRDy6ofRcBqC+RCmJu9
qK7lUPt871Y3oUmeBL7xJTd3FysJqd9JG7golFuBrP+2XaKneqjgwZq8Y/UH6xjdVnUSZN4ZZJAI
ykn9A3XiC6vyNv9amNQh48O7hK9xF9si5fqOgIRgbpD5Vtnx6S11m/6voYJIv7ts06bHss0Pd/fm
rB6RuN/2bbllaofaaL4T9hk68U7jS8qb9JTaJ26DAgMBAAEwDQYJKoZIhvcNAQEFBQADggEBACJX
AjltKct6/v1n1Uy8c1vlRoFn+TRaSW4DyqsFOTtmmhbXyG4+w1aQDgNPo8ipsdeYZRehWpD+PM1O
vkkopgoor2RgYVt8AO2nCaJhRReqFB+oMPV9ISKOTCfvWzHBDju/pEMC/QgTtpAoVrqi9EPeLrl5
bSpGp3AE1CQHYPiksL8GyqqI3YxGmzlpaPLqYVdA/W5kDI7kgyctkTheHICfqA0JzXjgeInbEp2M
KgyZkHlE0sQS9871JsAmSu2d/kQHlRen+jvq6h7iizPFNl1dyT4cXRi5ONcSuFvRMLgFrUw+HU/U
jLrLGP2i8m2jILkkG2S7Q0wLYynJYgQtToE=',
    ),
  ),
);


