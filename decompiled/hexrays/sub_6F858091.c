int __cdecl sub_6F858091(int a1, unsigned int a2, unsigned int a3)
{
  int result; // eax@2
  char v4; // [sp+18h] [bp-10h]@2
  int v5; // [sp+1Ch] [bp-Ch]@2

  if ( a1 )
  {
    *(_DWORD *)(a1 + 708) = 34;
    sub_6F857FAC((int)&v4, a3);
    sub_6F857FAC((int)&v5, a2);
    sub_6F8538A8(a1, (int)&v4, 8);
    *(_DWORD *)(a1 + 284) = a2;
    sub_6F833BBC(a1);
    sub_6F833BE9(a1, (int)&v5, 4);
    result = a1;
    *(_DWORD *)(a1 + 708) = 66;
  }
  return result;
}
