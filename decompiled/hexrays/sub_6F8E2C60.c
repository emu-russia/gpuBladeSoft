__int64 __stdcall sub_6F8E2C60(__int64 a1, int a2, int a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v6; // esi@1
  __int64 result; // rax@1
  int v8; // [sp+2Ch] [bp-20h]@1

  v6 = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 12) & 0xFFFFFFB5 | 8;
  result = sub_6F8DFA80(a1, a2, a3, a4, a5, &v8);
  *(_DWORD *)(a4 + 12) = v6;
  *a6 = v8;
  return result;
}
