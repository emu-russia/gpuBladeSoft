int __cdecl sub_6F761860(int *a1)
{
  int result; // eax@1

  result = *a1;
  if ( *a1 >= 0 && dword_70363500[result] >= 0 )
  {
    dword_70363500[result] = -1;
    *a1 = -1;
  }
  return result;
}
