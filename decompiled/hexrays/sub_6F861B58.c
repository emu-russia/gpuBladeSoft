char __cdecl sub_6F861B58(int a1)
{
  int v1; // ebx@1
  void *v2; // eax@1
  unsigned int v3; // ecx@1
  void *v4; // ST18_4@4
  int v5; // edx@5
  int v7; // edx@2
  unsigned int v8; // [sp+18h] [bp-20h]@1
  size_t v9; // [sp+1Ch] [bp-1Ch]@1

  v1 = *(_DWORD *)(a1 + 24);
  v9 = 2 * *(_DWORD *)(v1 + 36);
  v8 = *(_DWORD *)(v1 + 36);
  v2 = malloc(v9);
  v3 = v8;
  if ( !v2 )
  {
    v7 = *(_DWORD *)a1;
    *(_DWORD *)(v7 + 20) = 56;
    *(_DWORD *)(v7 + 24) = 10;
    (**(void (__thiscall ***)(_DWORD))a1)(v8);
    v3 = *(_DWORD *)(v1 + 36);
    v2 = 0;
  }
  qmemcpy(v2, *(const void **)(v1 + 32), v3);
  if ( *(_DWORD *)(v1 + 28) )
  {
    v4 = v2;
    free(*(void **)(v1 + 28));
    v2 = v4;
  }
  *(_DWORD *)(v1 + 28) = v2;
  v5 = *(_DWORD *)(v1 + 36);
  *(_DWORD *)v1 = (char *)v2 + v5;
  *(_DWORD *)(v1 + 4) = v5;
  *(_DWORD *)(v1 + 32) = v2;
  *(_DWORD *)(v1 + 36) = v9;
  return 1;
}
