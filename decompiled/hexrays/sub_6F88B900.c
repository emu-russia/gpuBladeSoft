int __cdecl sub_6F88B900(int a1, int a2)
{
  int v2; // edx@1
  unsigned int v3; // eax@1
  unsigned int v4; // ecx@2
  int result; // eax@3
  int v6; // [sp+8h] [bp-10h]@1
  int v7; // [sp+Ch] [bp-Ch]@1

  v2 = *(_QWORD *)a1 >> 29;
  v3 = *(_DWORD *)a1 & 0x3F;
  v6 = 8 * *(_DWORD *)a1;
  v7 = v2;
  if ( v3 > 0x37 )
    v4 = 120 - v3;
  else
    v4 = 56 - v3;
  sub_6F88B460((int *)a1, &unk_6FB9EEE0, v4);
  sub_6F88B460((int *)a1, &v6, 8u);
  result = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a2 = result;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 20);
  return result;
}
