int __cdecl sub_6F7CA460(int a1)
{
  char *v1; // eax@1
  char *v2; // edx@1
  int result; // eax@1
  int v4; // esi@2
  int v5; // ecx@2
  int v6; // ebp@2
  int v7; // edi@2
  int v8; // ecx@2
  int v9; // esi@2
  int v10; // ebp@2
  int v11; // esi@2
  int v12; // [sp+2Ch] [bp-20h]@1

  v1 = sub_6F773B30(*(_DWORD *)a1, 8, 0, 2 * *(_DWORD *)(a1 + 4), 0, &v12);
  v2 = v1;
  *(_DWORD *)(a1 + 40) = v1;
  result = v12;
  if ( !v12 )
  {
    v4 = *(_WORD *)(a1 + 22);
    v5 = *(_DWORD *)(a1 + 4);
    v6 = *(_DWORD *)(a1 + 24);
    *(_BYTE *)(a1 + 16) = 1;
    v7 = (int)&v2[8 * v5];
    v8 = 8 * v4;
    v9 = *(_DWORD *)(a1 + 28) + v4;
    *(_DWORD *)(a1 + 44) = v7;
    *(_DWORD *)(a1 + 60) = v8 + v6;
    v10 = *(_WORD *)(a1 + 20);
    *(_DWORD *)(a1 + 64) = v9;
    v11 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 76) = &v2[v8];
    *(_DWORD *)(a1 + 80) = v7 + v8;
    *(_DWORD *)(a1 + 68) = v11 + 2 * v10;
  }
  return result;
}
