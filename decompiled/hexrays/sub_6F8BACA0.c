void __cdecl __noreturn sub_6F8BACA0(const void *a1, int a2)
{
  void *v2; // esp@1
  char v3; // [sp+0h] [bp-A8h]@0
  char v4; // [sp+1Bh] [bp-8Dh]@1
  int v5; // [sp+1Ch] [bp-8Ch]@1
  int v6; // [sp+27h] [bp-81h]@1

  v6 = unk_6FBA621C;
  qmemcpy(
    (char *)&v6 + 1,
    "ot enough space for format expansion (Please submit full bug report at https://gcc.gnu.org/bugs/):\n    ",
    0x68u);
  sub_6F8A13B0((a2 - (_DWORD)a1 + 132) & 0xFFFFFFF0, v3);
  v2 = alloca(a2 - (_DWORD)a1 + 117);
  v5 = a2 - (_DWORD)a1;
  qmemcpy((void *)((unsigned int)&v4 & 0xFFFFFFF0), &v6, 0x68u);
  memcpy((void *)(((unsigned int)&v4 & 0xFFFFFFF0) + 104), a1, a2 - (_DWORD)a1);
  *(_BYTE *)(((unsigned int)&v4 & 0xFFFFFFF0) + v5 + 104) = 0;
  sub_6F95AFD0((const char *)((unsigned int)&v4 & 0xFFFFFFF0));
}
