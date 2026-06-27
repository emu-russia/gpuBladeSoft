int __thiscall sub_6F934FC0(int this, void *a2, char a3, int a4)
{
  void *v4; // eax@1
  int result; // eax@3

  v4 = a2;
  *(_DWORD *)this = off_6FBB0C60;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 4) = a4 != 0;
  *(_BYTE *)(this + 12) = a3 & (a2 != 0);
  if ( !a2 )
    v4 = &unk_6FBB1080;
  *(_DWORD *)(this + 29) = 0;
  *(_DWORD *)(this + 281) = 0;
  *(_DWORD *)(this + 24) = v4;
  result = 0;
  memset((void *)((this + 33) & 0xFFFFFFFC), 0, 4 * ((this + 29 - ((this + 33) & 0xFFFFFFFC) + 256) >> 2));
  *(_BYTE *)(this + 28) = 0;
  *(_DWORD *)(this + 285) = 0;
  *(_DWORD *)(this + 537) = 0;
  memset((void *)((this + 289) & 0xFFFFFFFC), 0, 4 * ((this + 285 - ((this + 289) & 0xFFFFFFFC) + 256) >> 2));
  *(_BYTE *)(this + 541) = 0;
  return result;
}
