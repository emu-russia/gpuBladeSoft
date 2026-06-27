signed int __cdecl sub_6F855F44(int a1)
{
  signed int v1; // eax@2
  _BYTE *v2; // ebx@14
  _WORD *v3; // eax@14
  int v4; // eax@18
  _WORD *v5; // eax@22
  unsigned int v6; // ST18_4@22
  _BYTE *v7; // eax@22
  int v8; // eax@25
  unsigned int v10; // [sp+1Ch] [bp-4Ch]@20
  char v11; // [sp+21h] [bp-47h]@10
  unsigned __int16 v12; // [sp+22h] [bp-46h]@10
  unsigned int v13; // [sp+24h] [bp-44h]@8
  signed int v14; // [sp+28h] [bp-40h]@4
  int v15; // [sp+2Ch] [bp-3Ch]@1
  int **v16; // [sp+30h] [bp-38h]@1
  _BYTE *v17; // [sp+38h] [bp-30h]@21
  _WORD *v18; // [sp+3Ch] [bp-2Ch]@21
  signed int v19; // [sp+40h] [bp-28h]@13
  int v20; // [sp+44h] [bp-24h]@10
  _BYTE *i; // [sp+48h] [bp-20h]@9
  _WORD *v22; // [sp+4Ch] [bp-1Ch]@9
  signed int v23; // [sp+50h] [bp-18h]@6
  int v24; // [sp+54h] [bp-14h]@1
  const void *v25; // [sp+58h] [bp-10h]@1
  _WORD *v26; // [sp+5Ch] [bp-Ch]@1

  v16 = *(int ***)a1;
  v15 = ***(_DWORD ***)a1;
  v26 = *(_WORD **)(a1 + 20);
  v25 = *(const void **)(a1 + 28);
  v24 = *(_DWORD *)(*(_DWORD *)a1 + 12);
  if ( *(_DWORD *)(*(_DWORD *)a1 + 16) & 2 )
    v1 = 3;
  else
    v1 = 1;
  v14 = v1;
  if ( (unsigned int)v16[4] & 1 )
  {
    if ( (unsigned int)v16[4] & 0x20 )
    {
      v23 = -1;
      ++v26;
      v25 = (char *)v25 + 1;
    }
    else
    {
      v23 = v1;
    }
    v13 = (unsigned int)v25 + (v1 + 1) * (_DWORD)v16[2];
    while ( 1 )
    {
      v4 = v24--;
      if ( !v4 )
        break;
      v22 = v26;
      for ( i = v25; (unsigned int)i < v13; ++i )
      {
        v12 = v22[v23];
        v11 = (255 * (unsigned int)v12 + 32895) >> 16;
        v20 = 0;
        i[v23] = v11;
        if ( v11 && v11 != -1 )
          v20 = ((v12 >> 1) + 2139062400) / v12;
        v19 = v14;
        do
        {
          v2 = i++;
          v3 = v22;
          ++v22;
          *v2 = sub_6F855EBC(*v3, v12, v20);
          --v19;
        }
        while ( v19 > 0 );
        ++v22;
      }
      sub_6F85495F(v15, *(const void **)(a1 + 28));
      v26 += *(_DWORD *)(a1 + 24) >> 1;
    }
  }
  else
  {
    v10 = (unsigned int)v25 + v1 * (_DWORD)v16[2];
    while ( 1 )
    {
      v8 = v24--;
      if ( !v8 )
        break;
      v18 = v26;
      v17 = v25;
      while ( (unsigned int)v17 < v10 )
      {
        v5 = v18;
        ++v18;
        v6 = 255 * *v5;
        v7 = v17++;
        *v7 = (((v6 & 0x7FFF) * (unsigned __int8)byte_6FB99680[v6 >> 15] >> 12)
             + (unsigned __int16)word_6FB99280[v6 >> 15]) >> 8;
      }
      sub_6F85495F(v15, v25);
      v26 += *(_DWORD *)(a1 + 24) >> 1;
    }
  }
  return 1;
}
