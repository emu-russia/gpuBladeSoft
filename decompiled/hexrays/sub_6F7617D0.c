int sub_6F7617D0()
{
  int result; // eax@1
  int v1; // edx@3
  bool v2; // zf@3

  result = 0;
  while ( dword_70363500[result] != -1 )
  {
    v1 = result + 1;
    v2 = dword_70363500[result++ + 1] == -1;
    if ( v2 )
      break;
    if ( dword_70363500[++result] == -1 )
      break;
    result = v1 + 2;
    if ( dword_70363500[v1 + 2] == -1 )
      break;
    result = v1 + 3;
    if ( dword_70363500[v1 + 3] == -1 )
      break;
    result = v1 + 4;
    if ( dword_70363500[v1 + 4] == -1 )
      break;
    result = v1 + 5;
    if ( dword_70363500[v1 + 5] == -1 )
      break;
    result = v1 + 6;
    if ( dword_70363500[v1 + 6] == -1 )
      break;
    result = v1 + 7;
    if ( v1 == 1017 )
      return -1;
  }
  dword_70363500[result] = result;
  return result;
}
