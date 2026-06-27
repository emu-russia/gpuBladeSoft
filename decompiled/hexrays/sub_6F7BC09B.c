void __usercall sub_6F7BC09B(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22)
{
  int v22; // eax@1
  int retaddr; // [sp+0h] [bp+0h]@1

  a22 = a15;
  retaddr = a2;
  JUMPOUT(a3 - 9, 1, &loc_6F7BC16E);
  v22 = (*(int (__fastcall **)(int, _DWORD))(a2 + 64))(a1, 0);
  *(_DWORD *)(a2 + 12) = v22;
  JUMPOUT(v22, 0, &loc_6F7BBD10);
  JUMPOUT(v22, -94, &loc_6F7BC08A);
  JUMPOUT(&loc_6F7BBD2B);
}
