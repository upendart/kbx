function enableMe() {
    document.getElementById("dscheck").value = "0";
}
function isCookieEnabled() {
    var exp = new Date();
    exp.setTime(exp.getTime() + 1800000);
    setCookie("testCookie", "cookie", exp, false, false, false);
    if (document.cookie.indexOf('testCookie') == -1) {
        return false;
    }
    // Updated 12 / 14 / 2012
    exp = new Date();
    exp.setTime(exp.getTime() - 1800000);
    setCookie("testCookie", "cookie", exp, false, false, false);
    return true;
}
function setCookie(name, value, expires, path, domain, secure) {
    var curCookie = name + "=" + value +
            ((expires) ? "; expires=" + expires.toGMTString() : "") + ((path) ? "; path=" + path : "") +
            ((domain) ? "; domain=" + domain : "") + ((secure) ? "; secure" : "");
    document.cookie = curCookie;
}
function isDupSubmit() {
    var dupSbmt = true;
    var e = document.getElementById("dscheck");
    if (e != null && e.value == "0") {
        dupSbmt = false;
        e.value = "1";
        setTimeout(enableMe, 5000);
    }
    return dupSbmt;
}
function setParamStatus() {
    if (!isDupSubmit()) {
        if (isCookieEnabled()) {
            document.getElementById('testcookie').value = 'true';
        }
        document.getElementById('testjs').value = 'true';
        return true;
    }
}