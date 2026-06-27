char *__cdecl sub_6F818100(int a1, int a2, int a3)
{
  signed int v3; // ecx@2
  int v4; // ebx@2
  unsigned int v5; // esi@2
  signed int v6; // eax@2
  unsigned int v7; // ebx@2
  int v8; // edx@3
  int v9; // edi@3
  int v10; // ebp@3
  size_t v11; // esi@3
  int v12; // ecx@3
  char *result; // eax@3
  char *v14; // ebx@3
  char *v15; // ebp@4
  char *v16; // ST04_4@4
  int v17; // [sp+14h] [bp-28h]@3
  char *v18; // [sp+18h] [bp-24h]@3

  if ( a3 )
  {
    v3 = 8;
    v4 = -((*(_DWORD *)(a1 + 48) & 1u) < 1);
    v5 = (v4 & 0xFFFFFFF0) + 32;
    v6 = (*(_DWORD *)(a1 + 48) & 1u) < 1 ? -8 : -16;
    v7 = (v4 & 0xFFFFFFF8) + 16;
    if ( !(*(_BYTE *)(a1 + 48) & 2) )
      goto LABEL_3;
  }
  else
  {
    v6 = -16;
    v7 = 16;
    v5 = 32;
  }
  v3 = 16;
LABEL_3:
  v8 = a1 + 48 * a2 + 288 + 16 * a3;
  v9 = *(_DWORD *)(v8 + 8);
  v10 = *(_DWORD *)(v8 + 12);
  v11 = *(_DWORD *)v8 + v5;
  v12 = v9 * v3;
  result = (char *)(v10 + v6);
  v17 = *(_DWORD *)(v8 + 8);
  v14 = (char *)(v10 + v9 * (*(_DWORD *)(v8 + 4) - 1) - v7);
  v18 = &result[-v12];
  if ( result != &result[-v12] )
  {
    do
    {
      v15 = &result[-v9];
      memcpy(&result[-v9], result, v11);
      v16 = v14;
      v14 += v17;
      memcpy(v14, v16, v11);
      result = v15;
    }
    while ( v18 != v15 );
  }
  return result;
}
