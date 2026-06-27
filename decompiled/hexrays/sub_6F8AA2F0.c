int __cdecl sub_6F8AA2F0(int a1, int *a2)
{
  unsigned __int16 v2; // bp@1
  int v3; // edx@1
  unsigned __int16 *v4; // edi@1
  unsigned __int16 v5; // ax@2
  __int16 *v6; // eax@3
  int v7; // eax@6
  __int16 *v9; // esi@9
  __int16 v10; // ax@9
  char *v11; // ecx@9
  __int16 v12; // di@10
  __int16 v13; // dx@10
  unsigned __int16 v14; // ax@10
  unsigned __int16 *v15; // [sp+4h] [bp-44h]@9
  char v16; // [sp+14h] [bp-34h]@9
  char v17; // [sp+16h] [bp-32h]@10
  char v18; // [sp+24h] [bp-24h]@9
  int v19; // [sp+26h] [bp-22h]@1
  int v20; // [sp+2Ah] [bp-1Eh]@1
  int v21; // [sp+2Eh] [bp-1Ah]@1
  int v22; // [sp+32h] [bp-16h]@1
  __int16 v23; // [sp+36h] [bp-12h]@1

  v2 = 0;
  v20 = 0;
  v21 = 0;
  v3 = *a2;
  v4 = (unsigned __int16 *)(a1 + 16);
  v22 = 0;
  v19 = v3;
  v23 = 0;
  do
  {
    v5 = *v4;
    --v4;
    if ( v5 )
    {
      v9 = &v23;
      sub_6F8A9D00(v5, (int)a2, (int)&v16);
      v15 = v4;
      v10 = 0;
      v11 = &v18;
      do
      {
        v12 = *v9;
        v13 = *(_WORD *)v11;
        v11 -= 2;
        --v9;
        v14 = v12 + v13 + v10;
        v9[1] = v14;
        v10 = v14 >> 16;
      }
      while ( v11 != &v17 );
      v4 = v15;
    }
    v2 |= v23;
    v6 = &v23;
    do
    {
      --v6;
      v6[1] = *v6;
    }
    while ( (int *)v6 != &v20 );
    LOWORD(v20) = 0;
  }
  while ( (unsigned __int16 *)(a1 + 4) != v4 );
  v7 = 0;
  do
  {
    *((_WORD *)a2 + v7) = *((_WORD *)&v19 + v7);
    ++v7;
  }
  while ( v7 != 9 );
  return v2;
}
