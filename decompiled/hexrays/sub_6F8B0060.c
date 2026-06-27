int __cdecl sub_6F8B0060(int a1, signed int a2)
{
  signed int v2; // ebx@1
  int v3; // ebp@2
  unsigned int v4; // ebx@2
  unsigned int *v5; // esi@2
  char v6; // di@2
  int *v7; // edx@3
  unsigned int v8; // eax@3
  int v9; // esi@4
  int v10; // ebx@5
  unsigned int *v11; // edx@6
  int result; // eax@9
  unsigned int *v13; // edi@10
  unsigned int v14; // [sp+0h] [bp-24h]@4
  signed int v15; // [sp+4h] [bp-20h]@1
  signed int v16; // [sp+8h] [bp-1Ch]@1

  v2 = *(_DWORD *)(a1 + 16);
  v16 = a2 >> 5;
  v15 = v2;
  if ( v2 <= a2 >> 5 )
    goto LABEL_8;
  v3 = a1 + 20;
  v4 = a1 + 20 + 4 * v2;
  v5 = (unsigned int *)(a1 + 20 + 4 * (a2 >> 5));
  v6 = a2 & 0x1F;
  if ( !(a2 & 0x1F) )
  {
    v13 = (unsigned int *)(a1 + 20);
    if ( v4 > (unsigned int)v5 )
    {
      do
      {
        *v13 = *v5;
        ++v5;
        ++v13;
      }
      while ( v4 > (unsigned int)v5 );
      v11 = (unsigned int *)(v3 + 4 * (v15 - v16));
      goto LABEL_13;
    }
LABEL_8:
    *(_DWORD *)(a1 + 16) = 0;
LABEL_9:
    result = a1;
    *(_DWORD *)(a1 + 20) = 0;
    return result;
  }
  v7 = (int *)(v5 + 1);
  v8 = *v5 >> v6;
  if ( v4 <= (unsigned int)(v5 + 1) )
  {
    *(_DWORD *)(a1 + 20) = v8;
    if ( v8 )
    {
      v11 = (unsigned int *)(a1 + 20);
LABEL_7:
      ++v11;
      goto LABEL_13;
    }
    goto LABEL_8;
  }
  v14 = v4;
  v9 = a1 + 20;
  do
  {
    v10 = *v7;
    v9 += 4;
    ++v7;
    *(_DWORD *)(v9 - 4) = (v10 << (32 - v6)) | v8;
    v8 = (unsigned int)*(v7 - 1) >> v6;
  }
  while ( v14 > (unsigned int)v7 );
  v3 = a1 + 20;
  v11 = (unsigned int *)(a1 + 20 + 4 * (v15 - v16) - 4);
  *v11 = v8;
  if ( v8 )
    goto LABEL_7;
LABEL_13:
  result = ((signed int)v11 - v3) >> 2;
  *(_DWORD *)(a1 + 16) = result;
  if ( v11 == (unsigned int *)v3 )
    goto LABEL_9;
  return result;
}
