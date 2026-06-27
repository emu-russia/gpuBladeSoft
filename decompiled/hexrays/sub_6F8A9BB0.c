int *__cdecl sub_6F8A9BB0(int a1, int a2)
{
  int v2; // esi@1
  int v3; // ebx@1
  signed int v4; // eax@3
  unsigned int *v5; // ebp@3
  unsigned int *v6; // ebx@3
  unsigned int v7; // edi@3
  int *v8; // eax@3
  int v9; // edx@3
  unsigned int v10; // eax@3
  unsigned int v11; // edx@4
  unsigned int v12; // esi@4
  unsigned int v13; // ecx@4
  unsigned int v14; // edx@4
  unsigned int i; // esi@5
  unsigned int v16; // ecx@6
  unsigned int v17; // edx@6
  unsigned int v18; // ecx@6
  int *v20; // ebx@9
  unsigned int v21; // [sp+20h] [bp-2Ch]@3
  int *v22; // [sp+24h] [bp-28h]@3
  int v23; // [sp+28h] [bp-24h]@3
  int v24; // [sp+2Ch] [bp-20h]@3

  v2 = a2;
  v3 = a1;
  if ( *(_DWORD *)(a1 + 16) < *(_DWORD *)(a2 + 16) )
  {
    v3 = a2;
    v2 = a1;
  }
  v4 = *(_DWORD *)(v3 + 4);
  v5 = (unsigned int *)(v2 + 20);
  v6 = (unsigned int *)(v3 + 20);
  v7 = 0;
  v8 = sub_6F8B0700(v4);
  v9 = *(v6 - 1);
  v22 = v8;
  v10 = (unsigned int)(v8 + 5);
  *(_DWORD *)(v10 - 4) = v9;
  v23 = v9;
  v24 = *(_DWORD *)(v2 + 16);
  v21 = v10 + 4 * v24;
  do
  {
    v11 = *v6;
    v12 = *v5;
    ++v6;
    ++v5;
    v10 += 4;
    v13 = v7 + (unsigned __int16)v11 + (unsigned __int16)v12;
    *(_WORD *)(v10 - 4) = v13;
    v14 = (v13 >> 16) + (v12 >> 16) + (v11 >> 16);
    *(_WORD *)(v10 - 2) = v14;
    v7 = v14 >> 16;
  }
  while ( v21 > v10 );
  for ( i = v21 + 4 * (v23 - v24); i > v10; v7 = v18 >> 16 )
  {
    v16 = *v6;
    v10 += 4;
    ++v6;
    v17 = v7 + (unsigned __int16)v16;
    *(_WORD *)(v10 - 4) = v17;
    v18 = (v17 >> 16) + (v16 >> 16);
    *(_WORD *)(v10 - 2) = v18;
  }
  if ( v7 )
  {
    if ( v23 == v22[2] )
    {
      v20 = sub_6F8B0700(v22[1] + 1);
      memcpy(v20 + 3, v22 + 3, 4 * v22[4] + 8);
      sub_6F8B07F0(v22);
      v22 = v20;
      v23 = v20[4];
    }
    v22[4] = v23 + 1;
    v22[v23 + 5] = 1;
  }
  return v22;
}
