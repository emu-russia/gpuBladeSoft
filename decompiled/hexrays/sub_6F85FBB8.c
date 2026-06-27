int __cdecl sub_6F85FBB8(int a1)
{
  int v1; // edx@2
  int result; // eax@2

  if ( *(_DWORD *)(a1 + 40) <= 5u )
  {
    switch ( *(_DWORD *)(a1 + 40) )
    {
      case 0:
        result = sub_6F85F7D4(a1, 0);
        break;
      case 1:
        result = sub_6F85F7D4(a1, 1u);
        break;
      case 2:
      case 3:
        result = sub_6F85F7D4(a1, 3u);
        break;
      case 4:
        result = sub_6F85F7D4(a1, 4u);
        break;
      case 5:
        result = sub_6F85F7D4(a1, 5u);
        break;
    }
  }
  else
  {
    v1 = *(_DWORD *)a1;
    *(_DWORD *)(v1 + 20) = 10;
    result = (*(int (__cdecl **)(int))v1)(a1);
  }
  return result;
}
