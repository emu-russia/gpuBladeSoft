int __stdcall sub_6F8ECEA0(__int64 a1, int a2, __int16 a3, int a4, _DWORD *a5, int *a6)
{
  int v6; // edi@1
  int result; // eax@1
  int v8; // ebx@1
  int v9; // [sp+3Ch] [bp-20h]@1

  v6 = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 12) & 0xFFFFFFB5 | 8;
  result = sub_6F8E9B70(a1, a2, a3, a4, a5, &v9);
  v8 = v9;
  *(_DWORD *)(a4 + 12) = v6;
  *a6 = v8;
  return result;
}
