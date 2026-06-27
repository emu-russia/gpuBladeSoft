signed int __cdecl sub_6F856977(int a1)
{
  int v1; // eax@3
  int v2; // eax@7
  int v3; // eax@12
  int v4; // eax@16
  char v5; // al@25
  char v6; // al@32
  char v7; // bl@34
  char v8; // al@35
  int v9; // eax@71
  char *v11; // eax@79
  void *v12; // [sp+3Ch] [bp-4Ch]@71
  int v13; // [sp+40h] [bp-48h]@77
  unsigned int v14; // [sp+44h] [bp-44h]@22
  int v15; // [sp+48h] [bp-40h]@14
  int v16; // [sp+4Ch] [bp-3Ch]@9
  int v17; // [sp+50h] [bp-38h]@5
  int v18; // [sp+54h] [bp-34h]@1
  int v19; // [sp+58h] [bp-30h]@1
  int v20; // [sp+5Ch] [bp-2Ch]@1
  int **v21; // [sp+60h] [bp-28h]@1
  char *v22; // [sp+68h] [bp-20h]@77
  char *v23; // [sp+6Ch] [bp-1Ch]@77
  int v24; // [sp+70h] [bp-18h]@72
  int v25; // [sp+74h] [bp-14h]@61
  int v26; // [sp+78h] [bp-10h]@61
  int v27; // [sp+7Ch] [bp-Ch]@1

  v21 = *(int ***)a1;
  v20 = ***(_DWORD ***)a1;
  v19 = *(_DWORD *)(**(_DWORD **)a1 + 4);
  v27 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v18 = (*(_DWORD *)(*(_DWORD *)a1 + 16) & 8) != 0;
  v1 = !(v27 & 8) && v27 & 4;
  v17 = v1;
  v2 = (*(_DWORD *)(*(_DWORD *)a1 + 16) & 8) == 0 && v27 & 1;
  v16 = v2;
  v3 = v17 && (*(_DWORD *)(*(_DWORD *)a1 + 16) & 8) == 0 && !*(_DWORD *)(a1 + 16);
  v15 = v3;
  sub_6F852C1F(v20, 0);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( (unsigned int)v21[4] & 8 )
      v4 = 1;
    else
      v4 = ((unsigned int)v21[4] & 3) + 1;
    *(_DWORD *)(a1 + 8) = (_DWORD)v21[2] * v4;
  }
  if ( v27 & 8 )
  {
    if ( !*(_DWORD *)(a1 + 12) || !v21[6] )
      sub_6F839044(**v21, (int)"no color-map for color-mapped image");
    v14 = (unsigned int)v21[6];
    if ( v14 > 0x10 )
    {
      v5 = 8;
    }
    else if ( v14 > 4 )
    {
      v5 = 4;
    }
    else if ( v14 <= 2 )
    {
      v5 = 1;
    }
    else
    {
      v5 = 2;
    }
    sub_6F850CC3(v20, v19, (int)v21[2], (int)v21[3], v5, 3, 0, 0, 0);
    sub_6F8561B8(a1);
  }
  else
  {
    if ( v27 & 1 )
      v6 = 4;
    else
      v6 = 0;
    v7 = (v27 & 2) + v6;
    if ( v15 )
      v8 = 16;
    else
      v8 = 8;
    sub_6F850CC3(v20, v19, (int)v21[2], (int)v21[3], v8, v7, 0, 0, 0);
  }
  if ( v15 )
  {
    sub_6F850B2A(v20, v19, 100000);
    if ( !((unsigned int)v21[5] & 1) )
      sub_6F850698(v20, v19, 31270, 32900, 64000, 33000, 30000, 60000, 15000, 6000);
  }
  else if ( (unsigned int)v21[5] & 1 )
  {
    sub_6F850B2A(v20, v19, 45455);
  }
  else
  {
    sub_6F851768(v20, v19, 0);
  }
  sub_6F853D4F(v20, v19);
  if ( v15 )
    sub_6F852C9A(v20);
  if ( v27 & 0x10 )
  {
    if ( !v18 && v27 & 2 )
      sub_6F852C7C(v20);
    v27 &= 0xFFFFFFEF;
  }
  if ( v27 & 0x20 )
  {
    if ( !v18 && v27 & 1 )
      sub_6F852EB3(v20);
    v27 &= 0xFFFFFFDF;
  }
  if ( v18 && (unsigned int)v21[6] <= 0x10 )
    sub_6F852CC6(v20);
  if ( v27 & 0xFFFFFFF0 )
    sub_6F839044(v20, (int)"png_write_image: unsupported transformation");
  v26 = *(_DWORD *)(a1 + 4);
  v25 = *(_DWORD *)(a1 + 8);
  if ( v17 )
    v25 *= 2;
  if ( v25 < 0 )
    v26 += (1 - (_DWORD)v21[3]) * v25;
  *(_DWORD *)(a1 + 20) = v26;
  *(_DWORD *)(a1 + 24) = v25;
  if ( (unsigned int)v21[5] & 2 )
  {
    sub_6F854F14(v20, 0, 0);
    sub_6F855868(v20, 3);
  }
  if ( v17 && v16 || !v18 && *(_DWORD *)(a1 + 16) )
  {
    v9 = sub_6F839DE9(v20, v19);
    v12 = sub_6F83B4D4(v20, v9);
    *(_DWORD *)(a1 + 28) = v12;
    if ( v15 )
      v24 = sub_6F839D4E((int)v21, sub_6F855CDE, a1);
    else
      v24 = sub_6F839D4E((int)v21, sub_6F855F44, a1);
    *(_DWORD *)(a1 + 28) = 0;
    sub_6F83B5A7(v20, (int)v12);
    if ( !v24 )
      return 0;
  }
  else
  {
    v23 = *(char **)(a1 + 20);
    v13 = *(_DWORD *)(a1 + 24);
    v22 = (char *)v21[3];
    while ( 1 )
    {
      v11 = v22--;
      if ( !v11 )
        break;
      sub_6F85495F(v20, v23);
      v23 += v13;
    }
  }
  sub_6F854367(v20, v19);
  return 1;
}
