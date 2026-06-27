void __thiscall sub_6F757580(int this)
{
  int v1; // ebp@1
  size_t v2; // esi@1
  unsigned int v3; // ecx@3
  unsigned int v4; // edi@3
  int v5; // ebx@3
  int v6; // ebp@4
  unsigned int v7; // ST1C_4@4
  const void *v8; // ST18_4@4
  int v9; // ecx@4
  void *v10; // [sp+10h] [bp-2Ch]@1
  int v11; // [sp+14h] [bp-28h]@3

  v1 = this;
  v2 = *(_DWORD *)(this + 12) * *(_DWORD *)(this + 4);
  v10 = malloc(v2);
  if ( !v10 )
  {
    nullsub_10();
    exit(1);
  }
  if ( *(_DWORD *)(v1 + 8) >> 1 )
  {
    v11 = 0;
    v3 = *(_DWORD *)(v1 + 8);
    v4 = 0;
    v5 = v1;
    do
    {
      v6 = *(_DWORD *)v5;
      v7 = v3;
      v8 = (const void *)(*(_DWORD *)v5 + v11);
      memcpy(v10, v8, v2);
      memcpy((void *)v8, (const void *)(v6 + v2 * (~v4 + v7)), v2);
      v9 = ~v4++;
      memcpy((void *)(*(_DWORD *)v5 + v2 * (v9 + *(_DWORD *)(v5 + 8))), v10, v2);
      v3 = *(_DWORD *)(v5 + 8);
      v11 += v2;
    }
    while ( v3 >> 1 > v4 );
  }
  free(v10);
}
