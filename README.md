spgame
======
Repo for documenting client functions in a defunct MORPG Survival Project.

Introduction
-----
This repo is created by <a href="http://forum6.hkgolden.com/ProfilePage.aspx?userid=195369">HKG 巫毒兔子</a>, an hobbyist enthusiast in reverse engineering and maintained by our contributors' support. The project attempts to construct an SPGAME server by reversing the mechanisms in the game client.

<br />
This repo contains the products and work-in-process for <u>recovered functions</u> in the game client:<br />
<b>./asm</b>         for raw assembly<br />
<b>./src</b>         for recovered C++-style functions<br />

<br />
<hr>
Currently working on:<br />
<b>
MakeDigest
</b>
Contact
-----
raidcallTW group: 27105202<br />

Documented functions
-----
**iosocketdll.dll**<br />
+1020 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/CClientObject/IsValid.cpp">CClientObject::IsValid</a><br />
+23C0 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/CGenericMessage/MakeDigest.cpp">CGenericMessage::MakeDigest</a> 70% done
<br />
+2420 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/classes/CGenericMessage/EncryptMsg.cpp">CGenericMessage::EncryptMsg</a><br />
+3B60 Encrypt<br />
+3B90 Decrypt<br />
+3C30 <a href="https://github.com/umehkg/spgame/blob/master/src/iosocketdll/orphaned_functions/3C30_DigestMsg1.cpp">DigestMsg1 </a> aka MD5::init<br />
+3C60 MD5::transform (verification needed)<br />
+46BC ws2_32.sento<br />
<br />
Exact (non-call):<br />
+465D ws2_32.connect<br />
+467B ws2_32.socket<br />
+4681 ws2_32.send<br />
+4687 ws2_32.recv<br />
+4699 ws2_32.listen<br />
+469F ws2_32.bind<br />
<br />
