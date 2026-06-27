int __cdecl sub_6F7A0A30(int a1, int a2, char a3)
{
  int *v3; // esi@2
  _DWORD *v4; // edi@2
  signed int v5; // edx@2
  int v6; // ebp@3
  int v8; // [sp+1Ch] [bp-20h]@3

  if ( a3 )
  {
    v3 = (int *)(a1 + 788);
    v4 = (_DWORD *)(a1 + 692);
    v5 = 1986884728;
  }
  else
  {
    v3 = (int *)(a1 + 784);
    v4 = (_DWORD *)(a1 + 684);
    v5 = 1752003704;
  }
  v6 = (*(int (__cdecl **)(int, signed int, int, int *))(a1 + 508))(a1, v5, a2, &v8);
  if ( !v6 )
  {
    *v4 = v8;
    *v3 = sub_6F7720A0(a2);
  }
  return v6;
}
