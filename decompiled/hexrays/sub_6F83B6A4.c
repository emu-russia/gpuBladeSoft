char *__cdecl sub_6F83B6A4(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char *v8; // [sp+2Ch] [bp-Ch]@1

  v8 = sub_6F833E97(a1, a2, a3, a4, a5, a6, a7);
  if ( v8 )
  {
    *((_DWORD *)v8 + 29) = 0x8000;
    *((_DWORD *)v8 + 176) = 0x2000;
    *((_DWORD *)v8 + 30) |= 0x100000u;
    *((_DWORD *)v8 + 30) |= 0x200000u;
    sub_6F841589((int)v8, 0, 0);
  }
  return v8;
}
