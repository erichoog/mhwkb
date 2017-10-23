// Angular SearchBoxApp Definition
var searchBoxApp = angular.module('searchBoxApp', []);

// Test Controller
searchBoxApp.controller('TestCtrl', [TestCtrl]);

function TestCtrl() {
    console.log('Test controller loaded successfully.')
};

// Search Content Directive
searchBoxApp.directive('searchContent', function($timeout) {
    return {
        link: function(scope, element, attrs) {

            var panelPrimary = Array.prototype.slice.call(element[0].children);

            function filterBy(value) {
                panelPrimary.forEach(function(el) {
                    el.className = searchForValues(value, el) !== -1 ? 'panel panel-primary' : 'panel panel-primary ng-hide';
                });
            }

            function searchForValues(value, panel)
            {
                var returnVal = -1;
            
                var panelHead = panel.children[0];
                var panelTitle = panelHead.children[0];
                var panelArticleTop = panelTitle.children[0];
                var panelArticleTitle = panelArticleTop.children[0];
                
                var result = panelArticleTitle.textContent.toLowerCase().indexOf(value.toLowerCase())
                if (result !== -1) return result;

                return returnVal;
            }

            scope.$watch(attrs.searchContent, function(newVal, oldVal) {
                if (newVal !== oldVal) {
                    filterBy(newVal);
                }
            });
        }
    };
});
