void *__cdecl sub_6F7628A0(signed int a1)
{
  void *result; // eax@2

  if ( a1 > 31 )
  {
    strcpy((char *)&unk_7036E500, (const char *)*(&off_6FB55300 + (((_BYTE)a1 - 32) & 0x3F)));
    result = &unk_7036E500;
  }
  else
  {
    strcpy((char *)&unk_7036E500, (const char *)*(&off_6FB55480 + (a1 & 0x1F)));
    result = &unk_7036E500;
  }
  return result;
}
