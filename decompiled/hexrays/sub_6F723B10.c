signed int sub_6F723B10()
{
  int v0; // ST18_4@1
  int v1; // ST14_4@1
  int v2; // ST10_4@1
  int v3; // ST0C_4@1
  int v4; // ST08_4@1
  unsigned int v5; // ecx@1
  signed int result; // eax@4

  v0 = 4 * *(_WORD *)(dword_6FCFFF7C + 4);
  v1 = *(_WORD *)(dword_6FCFFF7C + 6);
  v2 = *(_DWORD *)(dword_6FCFFF7C + 8);
  v3 = *(_DWORD *)(dword_6FCFFF7C + 4);
  v4 = *(_DWORD *)dword_6FCFFF7C;
  nullsub_10();
  v5 = *(_DWORD *)(dword_6FCFFF7C + 8);
  if ( v5 < 0x1000200 || v5 > 0x1000201 && v5 != 16778241 )
  {
    nullsub_10();
    result = 1;
  }
  else
  {
    byte_6FBB979F &= 0xEBu;
    result = 0;
  }
  return result;
}
