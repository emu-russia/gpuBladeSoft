int __cdecl sub_6F8581DC(int a1)
{
  int result; // eax@2
  char v2; // [sp+1Ch] [bp-Ch]@2

  if ( a1 )
  {
    *(_DWORD *)(a1 + 708) = 130;
    sub_6F857FAC((int)&v2, *(_DWORD *)(a1 + 320));
    result = sub_6F8538A8(a1, (int)&v2, 4);
  }
  return result;
}
