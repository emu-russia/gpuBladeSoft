signed int __cdecl sub_6F78D380(int a1, int a2, int a3)
{
  signed int result; // eax@3
  int v4; // edx@4
  unsigned __int8 v5; // cl@8
  bool v6; // cf@8
  bool v7; // zf@8
  signed int v8; // ecx@9
  const char *v9; // edi@9
  _BYTE *v10; // esi@9
  bool v11; // si@12
  bool v12; // zf@12
  const char *v13; // edi@13
  signed int v14; // ecx@13
  _BYTE *v15; // esi@13
  const char *v16; // edi@17
  signed int v17; // ecx@17
  _BYTE *v18; // esi@17
  signed int v19; // eax@24
  signed int v20; // eax@28
  int v21; // [sp+14h] [bp-28h]@21
  int v22; // [sp+18h] [bp-24h]@21
  __int16 v23; // [sp+1Ch] [bp-20h]@21
  __int16 v24; // [sp+1Eh] [bp-1Eh]@21

  if ( sub_6F78BE60(a1, a2)
    && ((sub_6F78B800(a2), v19 = sub_6F7CF110(a2 + 132, a1), (_BYTE)v19 == 7)
     || v19 && ((v20 = sub_6F7D13E0(a2 + 132, a1), (_BYTE)v20 == 7) || v20)
     || (*(_DWORD *)(a2 + 172) = a1, *(_DWORD *)(a2 + 104) = a2 + 132, sub_6F78BE60(a2 + 132, a2))) )
  {
    sub_6F78B800(a2);
    result = 2;
  }
  else if ( a3 <= 0 )
  {
    v4 = *(_DWORD *)(a2 + 180);
    if ( !v4 )
      goto LABEL_33;
    if ( !*(_DWORD *)(a2 + 176) )
      goto LABEL_33;
    if ( (*(_BYTE *)v4 & 0xDF) != 73 )
      goto LABEL_33;
    if ( (*(_BYTE *)(v4 + 1) & 0xDF) != 83 )
      goto LABEL_33;
    v5 = *(_BYTE *)(v4 + 2) & 0xDF;
    v6 = v5 < 0x4Fu;
    v7 = v5 == 79;
    if ( v5 != 79 )
      goto LABEL_33;
    v8 = 6;
    v9 = "10646";
    v10 = (_BYTE *)(v4 + 3);
    do
    {
      if ( !v8 )
        break;
      v6 = *v10 < (const unsigned __int8)*v9;
      v7 = *v10++ == *v9++;
      --v8;
    }
    while ( v7 );
    v11 = !v6 && !v7;
    v12 = v11 == v6;
    if ( v11 == v6 )
      goto LABEL_34;
    v13 = "8859";
    v14 = 5;
    v15 = (_BYTE *)(v4 + 3);
    do
    {
      if ( !v14 )
        break;
      v12 = *v15++ == *v13++;
      --v14;
    }
    while ( v12 );
    if ( !v12 )
      goto LABEL_33;
    v16 = "1";
    v17 = 2;
    v18 = *(_BYTE **)(a2 + 176);
    do
    {
      if ( !v17 )
        break;
      v12 = *v18++ == *v16++;
      --v17;
    }
    while ( v12 );
    if ( v12 )
    {
LABEL_34:
      v21 = a2;
      v22 = 1970170211;
      v23 = 3;
      v24 = 1;
    }
    else
    {
LABEL_33:
      v21 = a2;
      v22 = 0;
      v23 = 0;
      v24 = 0;
    }
    result = sub_6F76D420((int)&unk_6FB582C0, 0, (int)&v21, 0);
  }
  else
  {
    sub_6F78B800(a2);
    result = 6;
  }
  return result;
}
