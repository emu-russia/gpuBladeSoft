signed int __cdecl sub_6F7BD510(int a1)
{
  signed int v1; // esi@1
  int *v2; // eax@1
  int *v4; // [sp+1Ch] [bp-10h]@1

  v1 = sub_6F76C2B0(*(_DWORD *)(*(_DWORD *)a1 + 500), &v4);
  v2 = v4;
  *(_DWORD *)(a1 + 44) = v4;
  sub_6F76DE10(v2);
  return v1;
}
