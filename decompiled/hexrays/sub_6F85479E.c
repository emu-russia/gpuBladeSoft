char *__cdecl sub_6F85479E(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char *v8; // [sp+2Ch] [bp-Ch]@1

  v8 = sub_6F833E97(a1, a2, a3, a4, a5, a6, a7);
  if ( v8 )
  {
    *((_DWORD *)v8 + 48) = 0x2000;
    *((_DWORD *)v8 + 53) = 1;
    *((_DWORD *)v8 + 49) = -1;
    *((_DWORD *)v8 + 52) = 8;
    *((_DWORD *)v8 + 51) = 15;
    *((_DWORD *)v8 + 50) = 8;
    *((_DWORD *)v8 + 58) = 0;
    *((_DWORD *)v8 + 54) = -1;
    *((_DWORD *)v8 + 57) = 8;
    *((_DWORD *)v8 + 56) = 15;
    *((_DWORD *)v8 + 55) = 8;
    *((_DWORD *)v8 + 30) |= 0x200000u;
    sub_6F853987((int)v8, 0, 0, 0);
  }
  return v8;
}
