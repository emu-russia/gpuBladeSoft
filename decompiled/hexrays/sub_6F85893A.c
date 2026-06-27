int __cdecl sub_6F85893A(int a1, unsigned int a2, int a3, int a4)
{
  int result; // eax@2
  unsigned int v5; // eax@15
  int v6; // ST20_4@18
  _DWORD *v7; // [sp+18h] [bp-20h]@9
  signed int v8; // [sp+1Ch] [bp-1Ch]@4
  int v9; // [sp+20h] [bp-18h]@3
  unsigned int v10; // [sp+24h] [bp-14h]@3
  _DWORD **v11; // [sp+28h] [bp-10h]@3
  signed int v12; // [sp+2Ch] [bp-Ch]@1
  int v13; // [sp+2Ch] [bp-Ch]@8

  v12 = sub_6F8585A3(a1, a2, *(_DWORD *)(a3 + 4));
  if ( v12 )
    return v12;
  v11 = (_DWORD **)(a1 + 188);
  v10 = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)a3;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 144) = a3 + 12;
  *(_DWORD *)(a1 + 148) = 1024;
  v9 = *(_DWORD *)(a1 + 148);
  while ( 1 )
  {
    v8 = -1;
    if ( v10 < 0xFFFFFFFF )
      v8 = v10;
    v10 -= v8;
    *(_DWORD *)(a1 + 136) = v8;
    if ( *(_DWORD *)(a1 + 148) )
      goto LABEL_14;
    if ( v9 + a4 < 0 )
    {
      v13 = -4;
      goto LABEL_18;
    }
    v7 = *v11;
    if ( !*v11 )
      break;
LABEL_13:
    *(_DWORD *)(a1 + 144) = v7 + 1;
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(a1 + 192);
    v9 += *(_DWORD *)(a1 + 148);
    v11 = (_DWORD **)v7;
LABEL_14:
    if ( v10 )
      v5 = 0;
    else
      v5 = 4;
    v13 = sub_6F88F670(a1 + 132, v5);
    v10 += *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) = 0;
    if ( v13 )
      goto LABEL_18;
  }
  v7 = sub_6F83B347(a1, *(_DWORD *)(a1 + 192) + 4);
  if ( v7 )
  {
    *v7 = 0;
    *v11 = v7;
    goto LABEL_13;
  }
  v13 = -4;
LABEL_18:
  v6 = v9 - *(_DWORD *)(a1 + 148);
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a3 + 8) = v6;
  if ( (unsigned int)(v6 + a4) <= 0x7FFFFFFE )
  {
    sub_6F834D5F(a1, v13);
  }
  else
  {
    *(_DWORD *)(a1 + 156) = "compressed data too long";
    v13 = -4;
  }
  *(_DWORD *)(a1 + 128) = 0;
  if ( v13 != 1 || v10 )
  {
    result = v13;
  }
  else
  {
    sub_6F8584AE(a3 + 12, *(_DWORD *)(a3 + 4));
    result = 0;
  }
  return result;
}
