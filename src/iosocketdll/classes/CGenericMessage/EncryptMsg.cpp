void __thiscall CGenericMessage::EncryptMsg()
{
	*(LPDWORD)(DWORD)this+0xC = this->MakeDigest();
	Encrypt((char *)(DWORD)this+0x4, (*(LPDWORD)this)-4);
}
