signed int __cdecl sub_6F7A1130(int a1, int a2)
{
  int v2; // eax@4
  signed int v3; // esi@4
  _DWORD *v4; // ebp@6
  bool v6; // cf@14
  bool v7; // zf@14
  int v8; // ecx@18
  unsigned int v9; // eax@18
  unsigned int v10; // edx@18
  __int16 v11; // bp@23
  __int16 v12; // si@23
  int v13; // eax@29
  unsigned int v14; // [sp+1Ch] [bp-30h]@23
  unsigned int v15; // [sp+2Ch] [bp-20h]@1

  *(_DWORD *)(a1 + 724) = 0;
  *(_DWORD *)(a1 + 728) = 0;
  *(_DWORD *)(a1 + 732) = 0;
  *(_DWORD *)(a1 + 736) = 0;
  if ( (*(int (__cdecl **)(int, signed int, int, unsigned int *))(a1 + 508))(a1, 1128418371, a2, &v15) )
  {
    if ( (*(int (__cdecl **)(int, signed int, int, unsigned int *))(a1 + 508))(a1, 1161972803, a2, &v15)
      && (*(int (__cdecl **)(int, signed int, int, unsigned int *))(a1 + 508))(a1, 1651273571, a2, &v15) )
    {
      v3 = (*(int (__cdecl **)(int, signed int, int, int *))(a1 + 508))(a1, 1935829368, a2, (int *)&v15);
      if ( !v3 )
      {
        v6 = v15 < 7;
        v7 = v15 == 7;
        *(_DWORD *)(a1 + 732) = 3;
        if ( v6 || v7 )
          goto LABEL_4;
        v3 = sub_6F772380(a2, 8u);
        if ( !v3 )
        {
          v11 = sub_6F7724C0(a2);
          v12 = sub_6F7724C0(a2);
          v14 = sub_6F772560(a2);
          sub_6F772460(a2);
          if ( !v11 )
          {
            v2 = *(_DWORD *)(a1 + 724);
            v3 = 2;
            goto LABEL_5;
          }
          if ( (v12 & 0xFFFD) != 1 || v14 > 0xFFFF )
            goto LABEL_4;
          if ( 4 * v14 + 8 > v15 )
            v14 = (v15 - 8) >> 2;
          v13 = sub_6F7720A0(a2);
          v3 = sub_6F771FF0(a2, v13 - 8);
          if ( !v3 )
          {
            *(_DWORD *)(a1 + 728) = 4 * v14 + 8;
            v3 = sub_6F772240(a2, 4 * v14 + 8, (int *)(a1 + 724));
            if ( !v3 )
            {
              *(_DWORD *)(a1 + 736) = v14;
              return 0;
            }
          }
        }
      }
LABEL_16:
      v2 = *(_DWORD *)(a1 + 724);
      goto LABEL_5;
    }
    *(_DWORD *)(a1 + 732) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 732) = 2;
  }
  if ( v15 <= 7 )
  {
LABEL_4:
    v2 = *(_DWORD *)(a1 + 724);
    v3 = 3;
LABEL_5:
    if ( !v2 )
    {
LABEL_8:
      *(_DWORD *)(a1 + 728) = 0;
      *(_DWORD *)(a1 + 732) = 0;
      return v3;
    }
    v4 = (_DWORD *)(a1 + 724);
LABEL_7:
    sub_6F772340(a2, v4);
    goto LABEL_8;
  }
  v4 = (_DWORD *)(a1 + 724);
  v3 = sub_6F772240(a2, v15, (int *)(a1 + 724));
  if ( v3 )
    goto LABEL_16;
  v8 = *(_DWORD *)(a1 + 724);
  v9 = v15;
  v3 = 2;
  *(_DWORD *)(a1 + 728) = v15;
  v10 = _byteswap_ulong(*(_DWORD *)(v8 + 4));
  if ( *(_WORD *)v8 != 512 )
    goto LABEL_7;
  if ( v10 > 0xFFFF )
  {
    v3 = 3;
    goto LABEL_7;
  }
  if ( v9 < 48 * v10 + 8 )
    v10 = (v9 - 8) / 0x30;
  *(_DWORD *)(a1 + 736) = v10;
  return 0;
}
