void __noreturn sub_6F8B4C90()
{
  _BYTE *v0; // ebx@1
  int i; // ebx@1

  v0 = sub_6F8B3D30();
  v0[32] = v0[32] & 0xF3 | 4;
  sub_6F8B4C60(1);
  _InterlockedSub((volatile signed __int32 *)&dword_70373588, 1u);
  for ( i = *((_DWORD *)v0 + 3); i; i = *(_DWORD *)(i + 8) )
    (*(void (__cdecl **)(_DWORD))i)(*(_DWORD *)(i + 4));
  sub_6F8B4C60(0);
  sub_6F8B4B30(-559038737);
}
