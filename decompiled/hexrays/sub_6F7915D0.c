int __cdecl sub_6F7915D0(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // edx@1
  int result; // eax@1
  int v6; // [sp+1Ch] [bp-10h]@1

  v4 = sub_6F773A50(a2, 16, &v6);
  result = v6;
  if ( !v6 )
  {
    v4[1] = a3;
    *v4 = a3;
    v4[3] = 2;
    v4[2] = a4;
    *(_DWORD *)a1 = a2;
    *(_DWORD *)(a1 + 4) = v4;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
  }
  return result;
}
