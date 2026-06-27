void __cdecl sub_6F7CFB02(int a1, int a2, int a3, int a4, int a5, _BYTE *a6, int a7, int a8, int a9, int a10, int a11, const char *a12)
{
  int v12; // ecx@0
  _BYTE *v13; // eax@1
  unsigned int v14; // esi@1

  JUMPOUT(a7, 0, sub_6F7CFF52);
  ++a8;
  --a7;
  v13 = a6++;
  v14 = (*(_DWORD *)(v12 + 4) << 8) + *v13;
  JUMPOUT(v14, 31 * (v14 / 0x1F), sub_6F7CFE36);
  *(_DWORD *)v12 = 13;
  a12 = "incorrect header check";
  *(_DWORD *)(v12 + 4) = 5;
  sub_6F7CBF90((int)&a6);
  JUMPOUT(-3, 0, &loc_6F7CFE23);
  JUMPOUT(&loc_6F7CFAF5);
}
