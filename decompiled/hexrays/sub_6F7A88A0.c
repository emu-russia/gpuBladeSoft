int __cdecl sub_6F7A88A0(int a1, int a2, int a3, int a4)
{
  signed int v4; // edx@1
  signed int v5; // ecx@1
  int v6; // ebx@1
  int v7; // eax@1
  int v8; // esi@1
  int v9; // esi@1
  signed int v10; // edi@1
  signed int v11; // ebx@1
  int v12; // esi@15
  int v13; // edx@16
  int v14; // eax@17
  int v15; // eax@17
  int v16; // eax@17
  bool v17; // sf@17
  unsigned __int8 v18; // of@17
  int v19; // eax@17
  int v20; // edx@19
  int v21; // ecx@19
  int v22; // eax@19
  int v23; // ecx@19
  int v24; // edx@19
  int v25; // ecx@19
  int v26; // eax@19
  int v27; // edx@19
  int v28; // ecx@19
  int v29; // eax@19
  int v30; // ebx@20
  int v31; // ebp@20
  signed int v32; // eax@20
  signed int v33; // ecx@20
  int v34; // edi@20
  int v35; // eax@20
  int v37; // edx@25
  signed int v38; // [sp+Ch] [bp-50h]@20
  signed int v39; // [sp+10h] [bp-4Ch]@20
  signed int v40; // [sp+14h] [bp-48h]@20
  int v41; // [sp+18h] [bp-44h]@17
  int v42; // [sp+1Ch] [bp-40h]@17
  int v43; // [sp+20h] [bp-3Ch]@18
  int v44; // [sp+24h] [bp-38h]@17
  int v45; // [sp+28h] [bp-34h]@17

  v4 = 4 * *(_DWORD *)a3;
  *(_DWORD *)(a4 + 140) = v4;
  v5 = 4 * *(_DWORD *)(a3 + 4);
  *(_DWORD *)(a4 + 144) = v5;
  *(_DWORD *)(a4 + 148) = 4 * *(_DWORD *)a2;
  v6 = *(_DWORD *)a1;
  v7 = 4 * *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a4 + 152) = v7;
  v8 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a4 + 156) = 4 * v6;
  v9 = 4 * v8;
  *(_DWORD *)(a4 + 164) = *(_DWORD *)(a4 + 128);
  *(_DWORD *)(a4 + 160) = v9;
  v10 = *(_DWORD *)(a4 + 132);
  *(_DWORD *)(a4 + 168) = v10;
  v11 = v7;
  if ( v5 <= v7 )
    v11 = v5;
  if ( v11 > v10 )
    v11 = v10;
  if ( v9 <= v11 )
    v11 = v9;
  if ( v11 >> 8 < *(_DWORD *)(a4 + 84) )
  {
    if ( v5 >= v7 )
      v7 = v5;
    if ( v7 >= v10 )
      v10 = v7;
    if ( v9 >= v10 )
      v10 = v9;
    if ( v10 >> 8 >= *(_DWORD *)(a4 + 80) )
    {
      v12 = a4 + 140;
      while ( 1 )
      {
        v30 = *(_DWORD *)(v12 + 24);
        v31 = *(_DWORD *)(v12 + 28);
        v38 = *(_DWORD *)v12;
        v32 = v30 - *(_DWORD *)v12;
        v40 = v32;
        v33 = v31 - *(_DWORD *)(v12 + 4);
        v39 = *(_DWORD *)(v12 + 4);
        v34 = ((v32 >> 31) ^ v32) - (v32 >> 31);
        v35 = (v33 ^ (v33 >> 31)) - (v33 >> 31);
        if ( v34 > v35 )
        {
          v13 = v34 + (3 * v35 >> 3);
          if ( v13 > 0x7FFF )
            goto LABEL_22;
        }
        else
        {
          v13 = v35 + (3 * v34 >> 3);
          if ( v13 > 0x7FFF )
          {
LABEL_22:
            v41 = *(_DWORD *)(v12 + 8);
            v43 = *(_DWORD *)(v12 + 20);
            v42 = *(_DWORD *)(v12 + 12);
            v19 = *(_DWORD *)(v12 + 16);
            goto LABEL_19;
          }
        }
        v14 = *(_DWORD *)(v12 + 8);
        v44 = 42 * v13;
        v41 = v14;
        v15 = v14 - v38;
        v42 = *(_DWORD *)(v12 + 12);
        v45 = v15;
        v16 = (((v33 * v15 - (v42 - v39) * v40) >> 31) ^ (v33 * v15 - (v42 - v39) * v40))
            - ((v33 * v15 - (v42 - v39) * v40) >> 31);
        v18 = __OFSUB__(42 * v13, v16);
        v17 = 42 * v13 - v16 < 0;
        v19 = *(_DWORD *)(v12 + 16);
        if ( v17 ^ v18 )
        {
          v43 = *(_DWORD *)(v12 + 20);
          goto LABEL_19;
        }
        v43 = *(_DWORD *)(v12 + 20);
        v37 = (v33 * (v19 - v38) - (v43 - v39) * v40) >> 31;
        if ( v44 < (v37 ^ (v33 * (v19 - v38) - (v43 - v39) * v40)) - v37
          || v45 * (v45 - v40) + (v42 - v39) * (v42 - v39 - v33) > 0
          || (v19 - v38 - v40) * (v19 - v38) + (v43 - v39) * (v43 - v39 - v33) > 0 )
        {
LABEL_19:
          *(_DWORD *)(v12 + 48) = v30;
          *(_DWORD *)(v12 + 52) = v31;
          v20 = (v41 + v38) / 2;
          *(_DWORD *)(v12 + 8) = v20;
          v21 = (v30 + v19) / 2;
          *(_DWORD *)(v12 + 40) = v21;
          v22 = (v41 + v19) / 2;
          v23 = (v22 + v21) / 2;
          v24 = (v22 + v20) / 2;
          *(_DWORD *)(v12 + 16) = v24;
          *(_DWORD *)(v12 + 32) = v23;
          *(_DWORD *)(v12 + 24) = (v23 + v24) / 2;
          v25 = (v42 + v39) / 2;
          *(_DWORD *)(v12 + 12) = v25;
          v26 = (v31 + v43) / 2;
          v12 += 24;
          *(_DWORD *)(v12 + 20) = v26;
          v27 = (v43 + v42) / 2;
          v28 = (v27 + v25) / 2;
          v29 = (v26 + v27) / 2;
          *(_DWORD *)(v12 + 12) = v29;
          *(_DWORD *)(v12 - 4) = v28;
          *(_DWORD *)(v12 + 4) = (v28 + v29) / 2;
        }
        else
        {
          sub_6F7A8270(a4, v38, v39);
          if ( a4 + 140 == v12 )
            return 0;
          v12 -= 24;
        }
      }
    }
  }
  sub_6F7A8270(a4, v4, v5);
  return 0;
}
