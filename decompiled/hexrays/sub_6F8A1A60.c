int __cdecl sub_6F8A1A60(int *a1)
{
  int v1; // eax@1
  int result; // eax@4

  v1 = dword_6FB48A44;
  if ( dword_6FB48A44 < 0 )
  {
    sub_6F8A1780();
    v1 = dword_6FB48A44;
  }
  if ( v1 )
  {
    *a1 = sub_6F8B48C0(dword_70372B88);
    result = sub_6F8B4920(dword_70372B88, (int)a1);
  }
  else
  {
    result = dword_70372B8C;
    dword_70372B8C = (int)a1;
    *a1 = result;
  }
  return result;
}
