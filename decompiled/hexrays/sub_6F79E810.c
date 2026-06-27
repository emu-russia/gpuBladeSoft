int __cdecl sub_6F79E810(int a1, int a2)
{
  int result; // eax@2

  switch ( a2 )
  {
    case 5:
      result = a1 + 468;
      break;
    case 6:
      result = 0;
      if ( *(_DWORD *)(a1 + 548) )
        result = a1 + 548;
      break;
    case 0:
      result = a1 + 160;
      break;
    case 1:
      result = a1 + 260;
      break;
    case 2:
      result = 0;
      if ( *(_WORD *)(a1 + 364) != -1 )
        result = a1 + 364;
      break;
    case 3:
      result = a1 + 216;
      break;
    case 4:
      result = 0;
      if ( *(_BYTE *)(a1 + 292) )
        result = a1 + 296;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
