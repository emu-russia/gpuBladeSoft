int __thiscall sub_6F9581E0(int this, int a2)
{
  int result; // eax@1

  result = a2;
  if ( !*(_DWORD *)(this + 120) )
    result = a2 | 1;
  *(_DWORD *)(this + 20) = result;
  if ( result & *(_DWORD *)(this + 16) )
    sub_6F95ACA0("basic_ios::clear");
  return result;
}
