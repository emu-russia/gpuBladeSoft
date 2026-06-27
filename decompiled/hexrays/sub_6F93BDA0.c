void __thiscall sub_6F93BDA0(int this, unsigned int a2, int a3, int a4)
{
  *(_DWORD *)(this + 4);
  if ( a2 <= *(_DWORD *)(this + 4) )
    JUMPOUT(sub_6F93A0E0);
  sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::replace");
}
