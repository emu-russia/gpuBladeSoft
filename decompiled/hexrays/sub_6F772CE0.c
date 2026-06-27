_DWORD *sub_6F772CE0()
{
  _DWORD *result; // eax@1

  result = malloc(0x10u);
  if ( result )
  {
    *result = 0;
    result[1] = sub_6F772BD0;
    result[3] = sub_6F772BF0;
    result[2] = sub_6F772BE0;
  }
  return result;
}
