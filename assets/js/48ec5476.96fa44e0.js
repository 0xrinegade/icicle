"use strict";(self.webpackChunkdocusaurus=self.webpackChunkdocusaurus||[]).push([[503],{5680:(e,a,t)=>{t.d(a,{xA:()=>l,yg:()=>y});var n=t(6540);function s(e,a,t){return a in e?Object.defineProperty(e,a,{value:t,enumerable:!0,configurable:!0,writable:!0}):e[a]=t,e}function m(e,a){var t=Object.keys(e);if(Object.getOwnPropertySymbols){var n=Object.getOwnPropertySymbols(e);a&&(n=n.filter((function(a){return Object.getOwnPropertyDescriptor(e,a).enumerable}))),t.push.apply(t,n)}return t}function r(e){for(var a=1;a<arguments.length;a++){var t=null!=arguments[a]?arguments[a]:{};a%2?m(Object(t),!0).forEach((function(a){s(e,a,t[a])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(t)):m(Object(t)).forEach((function(a){Object.defineProperty(e,a,Object.getOwnPropertyDescriptor(t,a))}))}return e}function p(e,a){if(null==e)return{};var t,n,s=function(e,a){if(null==e)return{};var t,n,s={},m=Object.keys(e);for(n=0;n<m.length;n++)t=m[n],a.indexOf(t)>=0||(s[t]=e[t]);return s}(e,a);if(Object.getOwnPropertySymbols){var m=Object.getOwnPropertySymbols(e);for(n=0;n<m.length;n++)t=m[n],a.indexOf(t)>=0||Object.prototype.propertyIsEnumerable.call(e,t)&&(s[t]=e[t])}return s}var i=n.createContext({}),o=function(e){var a=n.useContext(i),t=a;return e&&(t="function"==typeof e?e(a):r(r({},a),e)),t},l=function(e){var a=o(e.components);return n.createElement(i.Provider,{value:a},e.children)},g="mdxType",c={inlineCode:"code",wrapper:function(e){var a=e.children;return n.createElement(n.Fragment,{},a)}},N=n.forwardRef((function(e,a){var t=e.components,s=e.mdxType,m=e.originalType,i=e.parentName,l=p(e,["components","mdxType","originalType","parentName"]),g=o(t),N=s,y=g["".concat(i,".").concat(N)]||g[N]||c[N]||m;return t?n.createElement(y,r(r({ref:a},l),{},{components:t})):n.createElement(y,r({ref:a},l))}));function y(e,a){var t=arguments,s=a&&a.mdxType;if("string"==typeof e||s){var m=t.length,r=new Array(m);r[0]=N;var p={};for(var i in a)hasOwnProperty.call(a,i)&&(p[i]=a[i]);p.originalType=e,p[g]="string"==typeof e?e:s,r[1]=p;for(var o=2;o<m;o++)r[o]=t[o];return n.createElement.apply(null,r)}return n.createElement.apply(null,t)}N.displayName="MDXCreateElement"},1449:(e,a,t)=>{t.r(a),t.d(a,{assets:()=>i,contentTitle:()=>r,default:()=>c,frontMatter:()=>m,metadata:()=>p,toc:()=>o});var n=t(8168),s=(t(6540),t(5680));t(1873);const m={},r="MSM Pre computation",p={unversionedId:"icicle/rust-bindings/msm-pre-computation",id:"icicle/rust-bindings/msm-pre-computation",title:"MSM Pre computation",description:"To understand the theory behind MSM pre computation technique refer to Niall Emmart's talk.",source:"@site/docs/icicle/rust-bindings/msm-pre-computation.md",sourceDirName:"icicle/rust-bindings",slug:"/icicle/rust-bindings/msm-pre-computation",permalink:"/icicle/rust-bindings/msm-pre-computation",editUrl:"https://github.com/ingonyama-zk/icicle/tree/main/docs/icicle/rust-bindings/msm-pre-computation.md",tags:[],version:"current",lastUpdatedBy:"HadarIngonyama",lastUpdatedAt:1718786304,formattedLastUpdatedAt:"6/19/2024",frontMatter:{},sidebar:"GettingStartedSidebar",previous:{title:"MSM",permalink:"/icicle/rust-bindings/msm"},next:{title:"NTT",permalink:"/icicle/rust-bindings/ntt"}},i={},o=[{value:"<code>precompute_points</code>",id:"precompute_points",level:2},{value:"Parameters",id:"parameters",level:3},{value:"Returns",id:"returns",level:4},{value:"Description",id:"description",level:4},{value:"Example Usage",id:"example-usage",level:4}],l={toc:o},g="wrapper";function c(e){let{components:a,...t}=e;return(0,s.yg)(g,(0,n.A)({},l,t,{components:a,mdxType:"MDXLayout"}),(0,s.yg)("h1",{id:"msm-pre-computation"},"MSM Pre computation"),(0,s.yg)("p",null,"To understand the theory behind MSM pre computation technique refer to Niall Emmart's ",(0,s.yg)("a",{parentName:"p",href:"https://youtu.be/KAWlySN7Hm8?feature=shared&t=1734"},"talk"),"."),(0,s.yg)("h2",{id:"precompute_points"},(0,s.yg)("inlineCode",{parentName:"h2"},"precompute_points")),(0,s.yg)("p",null,"Precomputes bases for the multi-scalar multiplication (MSM) by extending each base point with its multiples, facilitating more efficient MSM calculations."),(0,s.yg)("pre",null,(0,s.yg)("code",{parentName:"pre",className:"language-rust"},"pub fn precompute_points<C: Curve + MSM<C>>(\n    points: &(impl HostOrDeviceSlice<Affine<C>> + ?Sized),\n    msm_size: i32,\n    cfg: &MSMConfig,\n    output_bases: &mut DeviceSlice<Affine<C>>,\n) -> IcicleResult<()>\n")),(0,s.yg)("h3",{id:"parameters"},"Parameters"),(0,s.yg)("ul",null,(0,s.yg)("li",{parentName:"ul"},(0,s.yg)("strong",{parentName:"li"},(0,s.yg)("inlineCode",{parentName:"strong"},"points")),": The original set of affine points (","(","P_1, P_2, ..., P_n",")",") to be used in the MSM. For batch MSM operations, this should include all unique points concatenated together."),(0,s.yg)("li",{parentName:"ul"},(0,s.yg)("strong",{parentName:"li"},(0,s.yg)("inlineCode",{parentName:"strong"},"msm_size")),": The size of a single msm in order to determine optimal parameters."),(0,s.yg)("li",{parentName:"ul"},(0,s.yg)("strong",{parentName:"li"},(0,s.yg)("inlineCode",{parentName:"strong"},"cfg")),": The MSM configuration parameters."),(0,s.yg)("li",{parentName:"ul"},(0,s.yg)("strong",{parentName:"li"},(0,s.yg)("inlineCode",{parentName:"strong"},"output_bases")),": The output buffer for the extended bases. Its size must be ",(0,s.yg)("inlineCode",{parentName:"li"},"points.len() * precompute_factor"),". This buffer should be allocated on the device for GPU computations.")),(0,s.yg)("h4",{id:"returns"},"Returns"),(0,s.yg)("p",null,(0,s.yg)("inlineCode",{parentName:"p"},"Ok(())")," if the operation is successful, or an ",(0,s.yg)("inlineCode",{parentName:"p"},"IcicleResult")," error otherwise."),(0,s.yg)("h4",{id:"description"},"Description"),(0,s.yg)("p",null,"This function extends each provided base point ",(0,s.yg)("span",{parentName:"p",className:"math math-inline"},(0,s.yg)("span",{parentName:"span",className:"katex"},(0,s.yg)("span",{parentName:"span",className:"katex-mathml"},(0,s.yg)("math",{parentName:"span",xmlns:"http://www.w3.org/1998/Math/MathML"},(0,s.yg)("semantics",{parentName:"math"},(0,s.yg)("mrow",{parentName:"semantics"},(0,s.yg)("mo",{parentName:"mrow",stretchy:"false"},"("),(0,s.yg)("mi",{parentName:"mrow"},"P"),(0,s.yg)("mo",{parentName:"mrow",stretchy:"false"},")")),(0,s.yg)("annotation",{parentName:"semantics",encoding:"application/x-tex"},"(P)")))),(0,s.yg)("span",{parentName:"span",className:"katex-html","aria-hidden":"true"},(0,s.yg)("span",{parentName:"span",className:"base"},(0,s.yg)("span",{parentName:"span",className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.yg)("span",{parentName:"span",className:"mopen"},"("),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal",style:{marginRight:"0.13889em"}},"P"),(0,s.yg)("span",{parentName:"span",className:"mclose"},")")))))," with its multiples ",(0,s.yg)("span",{parentName:"p",className:"math math-inline"},(0,s.yg)("span",{parentName:"span",className:"katex"},(0,s.yg)("span",{parentName:"span",className:"katex-mathml"},(0,s.yg)("math",{parentName:"span",xmlns:"http://www.w3.org/1998/Math/MathML"},(0,s.yg)("semantics",{parentName:"math"},(0,s.yg)("mrow",{parentName:"semantics"},(0,s.yg)("mo",{parentName:"mrow",stretchy:"false"},"("),(0,s.yg)("msup",{parentName:"mrow"},(0,s.yg)("mn",{parentName:"msup"},"2"),(0,s.yg)("mi",{parentName:"msup"},"l")),(0,s.yg)("mi",{parentName:"mrow"},"P"),(0,s.yg)("mo",{parentName:"mrow",separator:"true"},","),(0,s.yg)("msup",{parentName:"mrow"},(0,s.yg)("mn",{parentName:"msup"},"2"),(0,s.yg)("mrow",{parentName:"msup"},(0,s.yg)("mn",{parentName:"mrow"},"2"),(0,s.yg)("mi",{parentName:"mrow"},"l"))),(0,s.yg)("mi",{parentName:"mrow"},"P"),(0,s.yg)("mo",{parentName:"mrow",separator:"true"},","),(0,s.yg)("mi",{parentName:"mrow",mathvariant:"normal"},"."),(0,s.yg)("mi",{parentName:"mrow",mathvariant:"normal"},"."),(0,s.yg)("mi",{parentName:"mrow",mathvariant:"normal"},"."),(0,s.yg)("mo",{parentName:"mrow",separator:"true"},","),(0,s.yg)("msup",{parentName:"mrow"},(0,s.yg)("mn",{parentName:"msup"},"2"),(0,s.yg)("mrow",{parentName:"msup"},(0,s.yg)("mo",{parentName:"mrow",stretchy:"false"},"("),(0,s.yg)("mi",{parentName:"mrow"},"p"),(0,s.yg)("mi",{parentName:"mrow"},"r"),(0,s.yg)("mi",{parentName:"mrow"},"e"),(0,s.yg)("mi",{parentName:"mrow"},"c"),(0,s.yg)("mi",{parentName:"mrow"},"o"),(0,s.yg)("mi",{parentName:"mrow"},"m"),(0,s.yg)("mi",{parentName:"mrow"},"p"),(0,s.yg)("mi",{parentName:"mrow"},"u"),(0,s.yg)("mi",{parentName:"mrow"},"t"),(0,s.yg)("msub",{parentName:"mrow"},(0,s.yg)("mi",{parentName:"msub"},"e"),(0,s.yg)("mi",{parentName:"msub"},"f")),(0,s.yg)("mi",{parentName:"mrow"},"a"),(0,s.yg)("mi",{parentName:"mrow"},"c"),(0,s.yg)("mi",{parentName:"mrow"},"t"),(0,s.yg)("mi",{parentName:"mrow"},"o"),(0,s.yg)("mi",{parentName:"mrow"},"r"),(0,s.yg)("mo",{parentName:"mrow"},"\u2212"),(0,s.yg)("mn",{parentName:"mrow"},"1"),(0,s.yg)("mo",{parentName:"mrow",stretchy:"false"},")"),(0,s.yg)("mo",{parentName:"mrow"},"\u22c5"),(0,s.yg)("mi",{parentName:"mrow"},"l"))),(0,s.yg)("mi",{parentName:"mrow"},"P"),(0,s.yg)("mo",{parentName:"mrow",stretchy:"false"},")")),(0,s.yg)("annotation",{parentName:"semantics",encoding:"application/x-tex"},"(2^lP, 2^{2l}P, ..., 2^{(precompute_factor - 1) \\cdot l}P)")))),(0,s.yg)("span",{parentName:"span",className:"katex-html","aria-hidden":"true"},(0,s.yg)("span",{parentName:"span",className:"base"},(0,s.yg)("span",{parentName:"span",className:"strut",style:{height:"1.138em",verticalAlign:"-0.25em"}}),(0,s.yg)("span",{parentName:"span",className:"mopen"},"("),(0,s.yg)("span",{parentName:"span",className:"mord"},(0,s.yg)("span",{parentName:"span",className:"mord"},"2"),(0,s.yg)("span",{parentName:"span",className:"msupsub"},(0,s.yg)("span",{parentName:"span",className:"vlist-t"},(0,s.yg)("span",{parentName:"span",className:"vlist-r"},(0,s.yg)("span",{parentName:"span",className:"vlist",style:{height:"0.8491em"}},(0,s.yg)("span",{parentName:"span",style:{top:"-3.063em",marginRight:"0.05em"}},(0,s.yg)("span",{parentName:"span",className:"pstrut",style:{height:"2.7em"}}),(0,s.yg)("span",{parentName:"span",className:"sizing reset-size6 size3 mtight"},(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight",style:{marginRight:"0.01968em"}},"l")))))))),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal",style:{marginRight:"0.13889em"}},"P"),(0,s.yg)("span",{parentName:"span",className:"mpunct"},","),(0,s.yg)("span",{parentName:"span",className:"mspace",style:{marginRight:"0.1667em"}}),(0,s.yg)("span",{parentName:"span",className:"mord"},(0,s.yg)("span",{parentName:"span",className:"mord"},"2"),(0,s.yg)("span",{parentName:"span",className:"msupsub"},(0,s.yg)("span",{parentName:"span",className:"vlist-t"},(0,s.yg)("span",{parentName:"span",className:"vlist-r"},(0,s.yg)("span",{parentName:"span",className:"vlist",style:{height:"0.8491em"}},(0,s.yg)("span",{parentName:"span",style:{top:"-3.063em",marginRight:"0.05em"}},(0,s.yg)("span",{parentName:"span",className:"pstrut",style:{height:"2.7em"}}),(0,s.yg)("span",{parentName:"span",className:"sizing reset-size6 size3 mtight"},(0,s.yg)("span",{parentName:"span",className:"mord mtight"},(0,s.yg)("span",{parentName:"span",className:"mord mtight"},"2"),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight",style:{marginRight:"0.01968em"}},"l"))))))))),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal",style:{marginRight:"0.13889em"}},"P"),(0,s.yg)("span",{parentName:"span",className:"mpunct"},","),(0,s.yg)("span",{parentName:"span",className:"mspace",style:{marginRight:"0.1667em"}}),(0,s.yg)("span",{parentName:"span",className:"mord"},"..."),(0,s.yg)("span",{parentName:"span",className:"mpunct"},","),(0,s.yg)("span",{parentName:"span",className:"mspace",style:{marginRight:"0.1667em"}}),(0,s.yg)("span",{parentName:"span",className:"mord"},(0,s.yg)("span",{parentName:"span",className:"mord"},"2"),(0,s.yg)("span",{parentName:"span",className:"msupsub"},(0,s.yg)("span",{parentName:"span",className:"vlist-t"},(0,s.yg)("span",{parentName:"span",className:"vlist-r"},(0,s.yg)("span",{parentName:"span",className:"vlist",style:{height:"0.888em"}},(0,s.yg)("span",{parentName:"span",style:{top:"-3.063em",marginRight:"0.05em"}},(0,s.yg)("span",{parentName:"span",className:"pstrut",style:{height:"2.7em"}}),(0,s.yg)("span",{parentName:"span",className:"sizing reset-size6 size3 mtight"},(0,s.yg)("span",{parentName:"span",className:"mord mtight"},(0,s.yg)("span",{parentName:"span",className:"mopen mtight"},"("),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight"},"p"),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight"},"reco"),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight"},"m"),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight"},"p"),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight"},"u"),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight"},"t"),(0,s.yg)("span",{parentName:"span",className:"mord mtight"},(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight"},"e"),(0,s.yg)("span",{parentName:"span",className:"msupsub"},(0,s.yg)("span",{parentName:"span",className:"vlist-t vlist-t2"},(0,s.yg)("span",{parentName:"span",className:"vlist-r"},(0,s.yg)("span",{parentName:"span",className:"vlist",style:{height:"0.3448em"}},(0,s.yg)("span",{parentName:"span",style:{top:"-2.3488em",marginLeft:"0em",marginRight:"0.0714em"}},(0,s.yg)("span",{parentName:"span",className:"pstrut",style:{height:"2.5em"}}),(0,s.yg)("span",{parentName:"span",className:"sizing reset-size3 size1 mtight"},(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight",style:{marginRight:"0.10764em"}},"f")))),(0,s.yg)("span",{parentName:"span",className:"vlist-s"},"\u200b")),(0,s.yg)("span",{parentName:"span",className:"vlist-r"},(0,s.yg)("span",{parentName:"span",className:"vlist",style:{height:"0.2901em"}},(0,s.yg)("span",{parentName:"span"})))))),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight"},"a"),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight"},"c"),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight"},"t"),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight",style:{marginRight:"0.02778em"}},"or"),(0,s.yg)("span",{parentName:"span",className:"mbin mtight"},"\u2212"),(0,s.yg)("span",{parentName:"span",className:"mord mtight"},"1"),(0,s.yg)("span",{parentName:"span",className:"mclose mtight"},")"),(0,s.yg)("span",{parentName:"span",className:"mbin mtight"},"\u22c5"),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal mtight",style:{marginRight:"0.01968em"}},"l"))))))))),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal",style:{marginRight:"0.13889em"}},"P"),(0,s.yg)("span",{parentName:"span",className:"mclose"},")"))))),", where ",(0,s.yg)("span",{parentName:"p",className:"math math-inline"},(0,s.yg)("span",{parentName:"span",className:"katex"},(0,s.yg)("span",{parentName:"span",className:"katex-mathml"},(0,s.yg)("math",{parentName:"span",xmlns:"http://www.w3.org/1998/Math/MathML"},(0,s.yg)("semantics",{parentName:"math"},(0,s.yg)("mrow",{parentName:"semantics"},(0,s.yg)("mo",{parentName:"mrow",stretchy:"false"},"("),(0,s.yg)("mi",{parentName:"mrow"},"l"),(0,s.yg)("mo",{parentName:"mrow",stretchy:"false"},")")),(0,s.yg)("annotation",{parentName:"semantics",encoding:"application/x-tex"},"(l)")))),(0,s.yg)("span",{parentName:"span",className:"katex-html","aria-hidden":"true"},(0,s.yg)("span",{parentName:"span",className:"base"},(0,s.yg)("span",{parentName:"span",className:"strut",style:{height:"1em",verticalAlign:"-0.25em"}}),(0,s.yg)("span",{parentName:"span",className:"mopen"},"("),(0,s.yg)("span",{parentName:"span",className:"mord mathnormal",style:{marginRight:"0.01968em"}},"l"),(0,s.yg)("span",{parentName:"span",className:"mclose"},")")))))," is a level of precomputation determined by the ",(0,s.yg)("inlineCode",{parentName:"p"},"precompute_factor"),". The extended set of points facilitates faster MSM computations by allowing the MSM algorithm to leverage precomputed multiples of base points, reducing the number of point additions required during the computation."),(0,s.yg)("p",null,"The precomputation process is crucial for optimizing MSM operations, especially when dealing with large sets of points and scalars. By precomputing and storing multiples of the base points, the MSM function can more efficiently compute the scalar-point multiplications."),(0,s.yg)("h4",{id:"example-usage"},"Example Usage"),(0,s.yg)("pre",null,(0,s.yg)("code",{parentName:"pre",className:"language-rust"},'let cfg = MSMConfig::default();\nlet precompute_factor = 4; // Number of points to precompute\nlet mut extended_bases = HostOrDeviceSlice::cuda_malloc(expected_size).expect("Failed to allocate memory for extended bases");\n\n// Precompute the bases using the specified factor\nprecompute_points(&points, msm_size, &cfg, &mut extended_bases)\n    .expect("Failed to precompute bases");\n')))}c.isMDXComponent=!0},1873:(e,a,t)=>{t(6540)}}]);