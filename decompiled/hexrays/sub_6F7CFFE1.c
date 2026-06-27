void __usercall sub_6F7CFFE1(int a1@<edi>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, void (*a16)(void), int a17)
{
  int v17; // eax@2
  int retaddr; // [sp+0h] [bp+0h]@1
  int v19; // [sp+4h] [bp+4h]@1

  v19 = *(_DWORD *)(a1 + 12);
  retaddr = a17;
  a16();
  v17 = *(_DWORD *)a1;
  JUMPOUT(&loc_6F7CFE8E);
}
