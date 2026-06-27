int sub_6F962070()
{
  int v0; // edx@1
  int result; // eax@2

  v0 = *sub_6F962260();
  if ( v0 )
  {
    result = *(_DWORD *)v0;
    if ( *(_BYTE *)(v0 + 48) & 1 )
      result = *(_DWORD *)(result - 80);
  }
  else
  {
    result = 0;
  }
  return result;
}
