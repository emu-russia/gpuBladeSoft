signed int __cdecl sub_6F855CDE(int a1)
{
  signed int v1; // eax@2
  signed __int16 *v2; // eax@15
  signed __int16 *v3; // eax@20
  int *v4; // eax@24
  unsigned __int16 v6; // [sp+16h] [bp-42h]@11
  unsigned int v7; // [sp+18h] [bp-40h]@9
  signed int v8; // [sp+1Ch] [bp-3Ch]@4
  int v9; // [sp+20h] [bp-38h]@1
  int **v10; // [sp+24h] [bp-34h]@1
  signed __int16 v11; // [sp+2Eh] [bp-2Ah]@15
  signed int v12; // [sp+30h] [bp-28h]@14
  int v13; // [sp+34h] [bp-24h]@11
  signed __int16 *i; // [sp+38h] [bp-20h]@10
  signed __int16 *v15; // [sp+3Ch] [bp-1Ch]@10
  int *v16; // [sp+40h] [bp-18h]@4
  signed int v17; // [sp+44h] [bp-14h]@6
  signed __int16 *v18; // [sp+48h] [bp-10h]@1
  signed __int16 *v19; // [sp+4Ch] [bp-Ch]@1

  v10 = *(int ***)a1;
  v9 = ***(_DWORD ***)a1;
  v19 = *(signed __int16 **)(a1 + 20);
  v18 = *(signed __int16 **)(a1 + 28);
  if ( *(_DWORD *)(*(_DWORD *)a1 + 16) & 2 )
    v1 = 3;
  else
    v1 = 1;
  v8 = v1;
  v16 = v10[3];
  if ( !((unsigned int)v10[4] & 1) )
    sub_6F839044(v9, (int)"png_write_image: internal call error");
  if ( (unsigned int)v10[4] & 0x20 )
  {
    v17 = -1;
    ++v19;
    ++v18;
  }
  else
  {
    v17 = v1;
  }
  v7 = (unsigned int)&v18[(_DWORD)v10[2] * (v1 + 1)];
  while ( 1 )
  {
    v4 = v16;
    v16 = (int *)((char *)v16 - 1);
    if ( !v4 )
      break;
    v15 = v19;
    for ( i = v18; (unsigned int)i < v7; ++i )
    {
      v6 = v15[v17];
      v13 = 0;
      i[v17] = v6;
      if ( v6 && v6 != -1 )
        v13 = ((v6 >> 1) + 2147450880) / v6;
      v12 = v8;
      do
      {
        v2 = v15;
        ++v15;
        v11 = *v2;
        if ( (unsigned __int16)*v2 < v6 )
        {
          if ( v11 && v6 != -1 )
            v11 = (v13 * (unsigned int)(unsigned __int16)v11 + 0x4000) >> 15;
        }
        else
        {
          v11 = -1;
        }
        v3 = i;
        ++i;
        *v3 = v11;
        --v12;
      }
      while ( v12 > 0 );
      ++v15;
    }
    sub_6F85495F(v9, *(const void **)(a1 + 28));
    v19 += *(_DWORD *)(a1 + 24) >> 1;
  }
  return 1;
}
