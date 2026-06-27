void __fastcall sub_6F7BBC20(int a1, int a2, int a3)
{
  _DWORD *v3; // ebp@1
  int v4; // edi@1

  v3 = (_DWORD *)a2;
  *(_DWORD *)a2 = a1;
  *(_DWORD *)(a2 + 12) = 0;
  v4 = a3 + a1;
  *(_DWORD *)(a2 + 8) = a3 + a1;
  (*(void (__cdecl **)(int))(a2 + 28))(a2);
  JUMPOUT(v4, *v3, &loc_6F7BBD28);
  JUMPOUT(loc_6F7BBC80);
}
