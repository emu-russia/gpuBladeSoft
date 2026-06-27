int __usercall sub_6F7AA020@<eax>(int result@<eax>)
{
  __int16 v1; // bx@1
  int v2; // ecx@2
  int v3; // esi@3
  int v4; // edx@3
  int (__cdecl *v5)(int, int, int); // ecx@5
  bool v6; // zf@7
  int (__cdecl *v7)(int, int, int); // ecx@8

  v1 = *(_WORD *)(result + 298);
  if ( v1 == 0x4000 )
  {
    v4 = *(_WORD *)(result + 294);
    *(_DWORD *)(result + 564) = v4;
    if ( (_WORD)v4 != 0x4000 )
      goto LABEL_5;
  }
  else
  {
    v2 = *(_WORD *)(result + 300);
    if ( (_WORD)v2 == 0x4000 )
    {
      v4 = *(_WORD *)(result + 296);
      LOWORD(v3) = *(_WORD *)(result + 294);
      *(_DWORD *)(result + 564) = v4;
    }
    else
    {
      v3 = *(_WORD *)(result + 294);
      v4 = (*(_WORD *)(result + 296) * v2 + v3 * v1) >> 14;
      *(_DWORD *)(result + 564) = v4;
    }
    if ( (_WORD)v3 != 0x4000 )
    {
LABEL_5:
      v5 = sub_6F7A9F60;
      if ( *(_WORD *)(result + 296) == 0x4000 )
        v5 = sub_6F7AA010;
      v6 = *(_WORD *)(result + 290) == 0x4000;
      *(_DWORD *)(result + 572) = v5;
      if ( !v6 )
        goto LABEL_8;
LABEL_17:
      *(_DWORD *)(result + 576) = sub_6F7AA000;
      goto LABEL_11;
    }
  }
  v6 = *(_WORD *)(result + 290) == 0x4000;
  *(_DWORD *)(result + 572) = sub_6F7AA000;
  if ( v6 )
    goto LABEL_17;
LABEL_8:
  v7 = sub_6F7A9FB0;
  if ( *(_WORD *)(result + 292) == 0x4000 )
    v7 = sub_6F7AA010;
  *(_DWORD *)(result + 576) = v7;
LABEL_11:
  *(_DWORD *)(result + 584) = sub_6F7AAC20;
  *(_DWORD *)(result + 588) = sub_6F7AABA0;
  if ( v4 == 0x4000 )
  {
    if ( v1 == 0x4000 )
    {
      *(_DWORD *)(result + 584) = sub_6F7A9DA0;
      *(_DWORD *)(result + 588) = sub_6F7A9DE0;
    }
    else if ( *(_WORD *)(result + 300) == 0x4000 )
    {
      *(_DWORD *)(result + 584) = sub_6F7A9DC0;
      *(_DWORD *)(result + 588) = sub_6F7A9E00;
    }
  }
  else if ( (unsigned int)(v4 + 1023) <= 0x7FE )
  {
    *(_DWORD *)(result + 564) = 0x4000;
  }
  *(_DWORD *)(result + 256) = 0;
  return result;
}
