int sub_6F75A3B0()
{
  int result; // eax@1
  int v1; // edx@3
  bool v2; // zf@3
  int v3; // ecx@12

  result = 0;
  while ( dword_70259120[result] != -1 )
  {
    v1 = result + 1;
    v2 = dword_70259120[result++ + 1] == -1;
    if ( v2 )
      break;
    if ( dword_70259120[++result] == -1 )
      break;
    result = v1 + 2;
    if ( dword_70259120[v1 + 2] == -1 )
      break;
    result = v1 + 3;
    if ( dword_70259120[v1 + 3] == -1 )
      break;
    result = v1 + 4;
    if ( dword_70259120[v1 + 4] == -1 )
      break;
    result = v1 + 5;
    if ( dword_70259120[v1 + 5] == -1 )
      break;
    result = v1 + 6;
    if ( dword_70259120[v1 + 6] == -1 )
      break;
    result = v1 + 7;
    if ( v1 == 121 )
      return -1;
  }
  v3 = 7 * result;
  dword_70259120[result] = result;
  dword_70259320[v3] = 0;
  dword_70259324[v3] = 0;
  dword_7025932C[v3] = 0;
  dword_70259330[v3] = 0;
  dword_70259328[v3] = 0;
  dword_70259334[v3] = 0;
  dword_70259338[v3] = 0;
  return result;
}
