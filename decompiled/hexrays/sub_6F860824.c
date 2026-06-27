int __cdecl sub_6F860824(int a1, int a2, int a3, int *a4)
{
  int v4; // edx@1
  int v5; // eax@1
  int v6; // ebx@1
  int v7; // eax@1
  signed int v8; // eax@1
  int result; // eax@1
  _DWORD *v10; // edi@5
  int v11; // edx@5
  int v12; // eax@7
  int v13; // [sp+8h] [bp-38h]@2
  int *v14; // [sp+Ch] [bp-34h]@2
  int v15; // [sp+10h] [bp-30h]@3
  signed int v16; // [sp+14h] [bp-2Ch]@1
  int v17; // [sp+18h] [bp-28h]@2
  unsigned int v18; // [sp+1Ch] [bp-24h]@1
  signed int v19; // [sp+20h] [bp-20h]@1
  unsigned int v20; // [sp+24h] [bp-1Ch]@4
  int v21; // [sp+28h] [bp-18h]@4
  int v22; // [sp+2Ch] [bp-14h]@1
  int v23; // [sp+30h] [bp-10h]@5

  v4 = *(_DWORD *)(a1 + 396);
  v18 = *(_DWORD *)(a2 + 28) * *(_DWORD *)(a2 + 36);
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_BYTE *)(v4 + v5 + 92);
  v7 = *(_BYTE *)(v4 + v5 + 102);
  v22 = v7;
  v8 = v6 * v7;
  v19 = v8;
  v16 = v8 >> 1;
  result = sub_6F860764(a3, *(_DWORD *)(a1 + 256), *(_DWORD *)(a1 + 28), v6 * v18);
  if ( *(_DWORD *)(a1 + 256) > 0 )
  {
    v14 = a4;
    v17 = a3;
    v13 = 0;
    do
    {
      v15 = *v14;
      if ( v18 )
      {
        v21 = 0;
        v20 = 0;
        if ( v22 )
        {
LABEL_5:
          v10 = (_DWORD *)v17;
          v11 = 0;
          v23 = 0;
          do
          {
            if ( v6 )
            {
              v12 = 0;
              do
                v11 += *(_BYTE *)(v21 + *v10 + v12++);
              while ( v6 > v12 );
            }
            ++v23;
            ++v10;
          }
          while ( v22 > v23 );
          goto LABEL_10;
        }
        while ( 1 )
        {
          v11 = 0;
LABEL_10:
          *(_BYTE *)(v15 + v20++) = (v11 + v16) / v19;
          if ( v18 <= v20 )
            break;
          v21 += v6;
          if ( v22 )
            goto LABEL_5;
        }
      }
      v13 += v22;
      ++v14;
      v17 += 4 * v22;
      result = v13;
    }
    while ( *(_DWORD *)(a1 + 256) > v13 );
  }
  return result;
}
