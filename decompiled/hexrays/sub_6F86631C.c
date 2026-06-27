unsigned int __cdecl sub_6F86631C(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7)
{
  int v7; // ebx@1
  int v8; // ecx@1
  int v9; // eax@5
  int v10; // ST30_4@7
  unsigned int result; // eax@7
  unsigned int v12; // edx@7
  int v13; // [sp+34h] [bp-24h]@2
  unsigned int v14; // [sp+3Ch] [bp-1Ch]@3

  v7 = *(_DWORD *)(a1 + 412);
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 )
  {
    v13 = *(_DWORD *)(v7 + 12);
  }
  else
  {
    v13 = (*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(a1 + 4) + 28))(
            a1,
            *(_DWORD *)(v7 + 8),
            *(_DWORD *)(v7 + 20),
            *(_DWORD *)(v7 + 16),
            0);
    *(_DWORD *)(v7 + 12) = v13;
    v8 = *(_DWORD *)(v7 + 24);
  }
  v14 = a7 - *a6;
  if ( a7 - *a6 > (unsigned int)(*(_DWORD *)(a1 + 96) - *(_DWORD *)(v7 + 20)) )
    v14 = *(_DWORD *)(a1 + 96) - *(_DWORD *)(v7 + 20);
  v9 = v14;
  if ( v14 > *(_DWORD *)(v7 + 16) - v8 )
    v9 = *(_DWORD *)(v7 + 16) - v8;
  v10 = v9;
  (*(void (__cdecl **)(int, int, int, int))(*(_DWORD *)(a1 + 440) + 4))(a1, v13 + 4 * v8, a5 + 4 * *a6, v9);
  *a6 += v10;
  result = *(_DWORD *)(v7 + 24) + v10;
  *(_DWORD *)(v7 + 24) = result;
  v12 = *(_DWORD *)(v7 + 16);
  if ( result >= v12 )
  {
    *(_DWORD *)(v7 + 20) += v12;
    *(_DWORD *)(v7 + 24) = 0;
  }
  return result;
}
