int __cdecl sub_6F8A1AD0(int *a1)
{
  int v1; // ebx@1
  int result; // eax@1

  v1 = *a1;
  result = dword_6FB48A44;
  if ( dword_6FB48A44 < 0 )
  {
    sub_6F8A1780();
    result = dword_6FB48A44;
  }
  if ( result )
    result = sub_6F8B4920(dword_70372B88, v1);
  else
    dword_70372B8C = v1;
  return result;
}
