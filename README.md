# get-schannel-ciphers
List enabled SCHANNEL ciphers (Windows).

# UPDATE Feb-22 2018:
PowerShell on Windows 10/Server 2016 now has a `Get-TlsCipherSuite` cmdlet. Use that instead.
https://docs.microsoft.com/en-us/powershell/module/tls/get-tlsciphersuite?view=win10-ps

I'm pretty sure the warning below still applies, but can't confirm.

#### Word of warning
Windows needs a reboot every time you enable/disable/change_cipher_order.
The cipher suite will still show up in this list even if the system was not rebooted 
(i.e. the cipher suite is not yet active but shows up).

![screenshot](https://github.com/snobu/get-schannel-ciphers/raw/master/screenshot.png)
