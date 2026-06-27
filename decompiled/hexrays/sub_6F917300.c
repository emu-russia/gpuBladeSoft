int __thiscall sub_6F917300(int this, int a2)
{
  int v2; // ebx@1
  int result; // eax@2

  v2 = this;
  if ( (unsigned __int8)(*(int (**)(void))(**(_DWORD **)(this + 88) + 24))() )
    result = (*(_DWORD *)(v2 + 8) - *(_DWORD *)(v2 + 12)) >> 1;
  else
    result = *(_DWORD *)(v2 + 92)
           + (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(**(_DWORD **)(v2 + 88) + 28))(
               a2,
               *(_DWORD *)(v2 + 92),
               *(_DWORD *)(v2 + 100),
               (*(_DWORD *)(v2 + 8) - *(_DWORD *)(v2 + 4)) >> 1)
           - *(_DWORD *)(v2 + 104);
  return result;
}
